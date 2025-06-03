/* Write your PL/SQL query statement below */
select firstName, lastName, city, state
from person left outer join address on person.personId = address.personId;