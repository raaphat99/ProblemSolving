select project_id, round(avg(Cast(experience_years as decimal)), 2) as average_years
from Project pro
    join Employee emp
        On emp.employee_id = pro.employee_id
group by project_id;
