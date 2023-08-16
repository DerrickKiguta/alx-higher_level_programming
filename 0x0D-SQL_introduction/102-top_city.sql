-- To display top 3 cities with highest average temperatures during July and August
SELECT city, AVG(temperature) AS avg_temp
FROM download
WHERE (MONTH(date) = 7 OR MONTH(date) = 8)
GROUP BY city
ORDER BY avg_temp DESC
LIMIT 3;
