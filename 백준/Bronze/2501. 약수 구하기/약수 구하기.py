N, K = map(int, input().split())  # 대화형 환경이나 스크립트에서 입력을 받기 위해 input() 사용
list = []
for i in range(1, N + 1):  # N을 포함하기 위해 N+1 사용
    if N % i == 0:
        list.append(i)

if len(list) < K:
    print(0)
else:
    print(list[K - 1])
