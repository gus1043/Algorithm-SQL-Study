/* Write your PL/SQL query statement below */
SELECT PLAYER_ID, TO_CHAR(MIN(event_date), 'YYYY-MM-DD') AS first_login   
FROM ACTIVITY
GROUP BY PLAYER_ID
