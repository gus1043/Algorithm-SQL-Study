/* Write your PL/SQL query statement below */
select TO_CHAR(activity_date, 'YYYY-MM-DD') AS DAY, COUNT(UNIQUE(USER_ID)) AS ACTIVE_USERS
from Activity
WHERE activity_date BETWEEN (TO_DATE('2019-07-27', 'YYYY-MM-DD')-29) AND '2019-07-27'
GROUP BY activity_date
