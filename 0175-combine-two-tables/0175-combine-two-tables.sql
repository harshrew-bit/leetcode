select p.firstName,P.lastName,a.city,a.state
from Person p
left join Address a
on p.personId=a.personId;