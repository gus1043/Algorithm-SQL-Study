/* Write your PL/SQL query statement below */
SELECT DISTINCT(AUTHOR_ID) AS ID
FROM VIEWS
WHERE AUTHOR_ID = Viewer_id
ORDER BY ID ASC;