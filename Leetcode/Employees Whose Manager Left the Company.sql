select employee_id
from Employees
where manager_id IN (
    Select manager_id
    from Employees
    where manager_id NOT IN (select employee_id from Employees)
) AND salary < 30000
Order by 1;
