WITH ranked AS (
    SELECT 
        e.*,
        d.name AS Department,
        DENSE_RANK() OVER (
            PARTITION BY e.departmentId 
            ORDER BY e.salary DESC
        ) AS rnk
    FROM Employee e
    JOIN Department d ON e.departmentId = d.id
)
SELECT Department, name AS Employee, salary AS Salary
FROM ranked
WHERE rnk <= 3;
