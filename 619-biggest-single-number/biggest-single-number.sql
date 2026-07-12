# Write your MySQL query statement below
select max(single_numbers.num) as num
from(
select num 
from MyNumbers 
group by num
having count(num)=1
) as single_numbers
 
