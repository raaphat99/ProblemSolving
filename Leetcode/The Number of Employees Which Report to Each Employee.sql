With CTE
as (Select reports_to as employee_id,
           Count(reports_to) as reports_count,
           ROUND(AVG(age)) as average_age
    From Employees
    where reports_to IS NOT NULL
    Group by reports_to
    Having Count(reports_to) >= 1
   )
Select emp.employee_id,
       name,
       reports_count,
       average_age
From Employees emp
    Join CTE
        On emp.employee_id = CTE.employee_id
Order by 1;
