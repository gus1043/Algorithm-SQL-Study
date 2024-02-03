def solution(x, n):
    answer = []
    now=x
    for i in range(n):
        answer.append(now)
        now+=x
    print(answer)
    return answer