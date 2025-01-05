select distinct num as ConsecutiveNums 
from (
    select id, num, 
        Lead(num) over (order by id) as next_num,
        Lag(num) over (order by id) as prev_num
    from Logs
) as CTE
where num = next_num AND num = prev_num;
