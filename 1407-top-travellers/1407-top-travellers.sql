select name , COALESCE(SUM(r.distance), 0) as travelled_distance 
from Users u
left join Rides r 
on r.user_id=u.id
group by u.id,u.name
order by travelled_distance desc , name asc;