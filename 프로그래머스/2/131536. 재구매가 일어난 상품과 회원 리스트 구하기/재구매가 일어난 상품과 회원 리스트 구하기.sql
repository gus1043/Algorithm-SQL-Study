-- 동일한 상품을 재구매한 데이터
-- 회원 id, 상품 id
-- 회원 id를 기준으로 오름차순, 상품 id 를 기준으로 내림차순
SELECT USER_ID, PRODUCT_ID
FROM ONLINE_SALE
GROUP BY USER_ID, PRODUCT_ID
HAVING COUNT(USER_ID)>1
ORDER BY USER_ID ASC, PRODUCT_ID DESC;
