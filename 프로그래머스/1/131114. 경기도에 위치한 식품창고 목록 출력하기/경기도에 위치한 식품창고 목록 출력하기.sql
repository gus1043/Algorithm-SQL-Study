-- 코드를 입력하세요
SELECT warehouse_id, WAREHOUSE_NAME,ADDRESS, COALESCE(FREEZER_YN, 'N') AS FREEZER_YN
FROM FOOD_WAREHOUSE 
where ADDRESS like '경기도%'
order by warehouse_id asc;