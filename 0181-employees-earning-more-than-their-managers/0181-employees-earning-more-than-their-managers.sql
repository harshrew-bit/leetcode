select a.name as Employee from Employee as a 
join Employee as b
on a.managerid=b.id
where a.salary>b.salary;