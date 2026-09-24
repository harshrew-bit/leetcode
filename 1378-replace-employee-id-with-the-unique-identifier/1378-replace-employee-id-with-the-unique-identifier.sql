select unique_id,name from employees a
left join EmployeeUNI b
on a.id=b.id
;
