SELECT id, movie, description, rating
FROM CINEMA
WHERE MOD(ID, 2) = 1 AND description != 'boring'
ORDER BY RATING DESC;