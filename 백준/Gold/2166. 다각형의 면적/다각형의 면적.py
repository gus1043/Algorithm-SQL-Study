import sys

N = int(sys.stdin.readline())
point = []
answer = 0 

for i in range(N):
    point.append(list(map(int, sys.stdin.readline().split()))) 
point.append(point[0])

for i in range(N):
    answer += point[i][1]*point[i+1][0] - point[i][0]*point[i+1][1]

print(abs(answer)/2)