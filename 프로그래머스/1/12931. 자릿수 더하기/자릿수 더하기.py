def solution(n):
    answer = 0
    length = len(str(n))-1
    
    for i in range(length, -1, -1) :
        temp = 0
        temp += n//10**i #1
        n -= temp*10**i
        answer += temp

    return answer