select Department,
       Employee,
       Salary
from
(
    select dept.name as Department,
           emp.name as Employee,
           emp.salary as Salary,
           Dense_Rank() over (partition by dept.name order by salary desc) as DR
    from Employee emp
        inner join Department dept
            on dept.id = emp.departmentId
) as CTE
where DR = 1;
