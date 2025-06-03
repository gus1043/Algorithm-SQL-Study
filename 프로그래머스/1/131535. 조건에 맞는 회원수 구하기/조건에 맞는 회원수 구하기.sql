-- 코드를 입력하세요
SELECT count(*)
from user_info
WHERE joined >= TO_DATE('2021-01-01', 'yyyy-mm-dd') and  joined <= TO_DATE('2021-12-31', 'yyyy-mm-dd')
and age between 20 and 29
