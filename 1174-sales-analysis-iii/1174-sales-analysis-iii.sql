SELECT product_id, product_name
FROM Product p NATURAL JOIN Sales s
GROUP BY product_id, product_name
HAVING
    MIN(s.sale_date) >= '2019-01-01'
    AND MAX(s.sale_date) <= '2019-03-31';
