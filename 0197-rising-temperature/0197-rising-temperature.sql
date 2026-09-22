select b.id from Weather a
cross join Weather b
where datediff(b.recordDate,a.recordDate)=1
and b.temperature>a.temperature;
