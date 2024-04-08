# 정다면체 
# 두 개의 정 N면체와 정 M면체의 두 개의 주사위를 던져서 나올 수 있는 눈의 합 중 가장 확 
# 률이 높은 숫자를 출력하는 프로그램을 작성하세요. 
# 정답이 여러 개일 경우 오름차순으로 출력합니다. 
# ▣ 입력설명 
# 첫 번째 줄에는 자연수 N과 M이 주어집니다. N과 M은 4, 6, 8, 12, 20 중의 하나입니다. 
# ▣ 출력설명 
# 첫 번째 줄에 답을 출력합니다. 
# ▣ 입력예제 1 
# 4 6 
# ▣ 출력예제 1 
# 5 6 7

import sys
N, M = map(int, sys.stdin.readline().split())
Map=  {}
temp = 0

for i in range(N):
    for j in range(M):
        temp=(i+1)+(j+1)
        if temp in Map:
            Map[temp]+=1
        else:
            Map[temp]=1

map_value=max(Map.values())
 
result = [k for k, v in Map.items() if v == map_value]
result.sort()
print(*result)

# 강사님 풀이
# 리스트로 초기화해서 만들기! 인덱스에 따른 카운트
import sys
N, M= map(int, sys.stdin.readline().split())
list=[0]*(N+M+3) #0으로 리스트 초기화


for i in range(1, N+1):
    for j in range(1, M+1):
        list[i+j]+=1
print(list)

for i in range(len(list)):
    if list[i]==max(list):
        print(i, end=' ')
