-- To display max temperature of each state ordered by State name
SELECT state, MAX(temperature) AS max_temp
FROM download
GROUP BY state
ORDER BY state;
