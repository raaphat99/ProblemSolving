SELECT 
    COALESCE(
        (SELECT DISTINCT salary 
         FROM (SELECT salary, DENSE_RANK() OVER (ORDER BY salary DESC) AS Rank
               FROM Employee) AS RankedSalaries 
         WHERE Rank = 2),
        NULL
    ) AS SecondHighestSalary;
