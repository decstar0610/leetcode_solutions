# Write your MySQL query statement below
with lead_nums as(
    select num , 
    lead(num,1) over(ORDER BY id) as num1,
    lead(num,2) over(ORDER BY id) as num2
    from logs
)
select distinct  num as ConsecutiveNums 
from lead_nums
where (num=num1) and (num=num2)
