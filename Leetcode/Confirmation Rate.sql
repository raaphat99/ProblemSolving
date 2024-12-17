select s.user_id, ROUND(AVG(IF(c.action = 'confirmed', 1, 0)), 2) as confirmation_rate
from Signups as s
Left Join Confirmations as c
On s.user_id = c.user_id
group by s.user_id;
