-- 상반기 동안 각 아이스크림 성분 타입과 성분 타입에 대한 아이스크림의 총주문량코드
--  총주문량을 총주문량이 작은 순서대로 조회
SELECT INGREDIENT_TYPE, SUM(TOTAL_ORDER) AS TOTAL_ORDER
FROM FIRST_HALF NATURAL JOIN ICECREAM_INFO
GROUP BY INGREDIENT_TYPE
ORDER BY TOTAL_ORDER ASC;