def solution(n):
    answer = 0
    for i in range(1,n):
        if n%i==1:
            print(i)
            answer=i
            break
    print(answer)
    return answer