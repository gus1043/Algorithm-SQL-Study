-- 코드를 입력하세요
SELECT 	ingredient_type, sum(total_order)  as TOTAL_ORDER
from FIRST_HALF Natural Join ICECREAM_INFO
group by ingredient_type 