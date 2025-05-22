def solution(n):
    answer = -1
    
    if (int(n**0.5)**2 == n):
        answer = ((n**0.5)+1)**2

    return answer