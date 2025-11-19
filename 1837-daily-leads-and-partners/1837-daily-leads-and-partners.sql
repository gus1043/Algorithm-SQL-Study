/* Write your PL/SQL query statement below */
SELECT TO_CHAR(date_id, 'YYYY-MM-DD') AS DATE_ID, make_name, COUNT(DISTINCT(lead_id)) AS unique_leads, COUNT(DISTINCT(partner_id)) AS unique_partners
FROM DailySales
GROUP BY  date_id, make_name;
