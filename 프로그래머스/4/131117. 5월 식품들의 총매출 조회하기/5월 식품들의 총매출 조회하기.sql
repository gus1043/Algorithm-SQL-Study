-- 코드를 입력하세요
SELECT PRODUCT_ID,	PRODUCT_NAME, SUM(price * amount) AS TOTAL_SALES
from FOOD_PRODUCT natural join food_order
where produce_date>=to_date('2022-05-01', 'yyyy-mm-dd') and produce_date<=to_date('2022-05-31', 'yyyy-mm-dd')
group by PRODUCT_ID,PRODUCT_NAME
order by total_sales desc, product_id asc