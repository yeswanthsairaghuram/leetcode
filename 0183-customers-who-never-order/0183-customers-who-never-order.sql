# Write your MySQL query statement below
-- select name as Customers from Customers
-- where id not in(select customerId from orders );

select c.name as Customers from Customers c left join orders o on c.id=o.customerId WHERE
    O.customerId IS  NULL;;