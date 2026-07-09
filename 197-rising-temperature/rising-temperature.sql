with CTE as 
(select *, 
lag(temperature) over(ORDER BY recordDate ) as prev_temp ,
lag(recordDate) over (ORDER BY recordDate ) as prev_date
from weather
)
select id
from CTE where temperature >prev_temp
and datediff(recordDate , prev_date)=1
;