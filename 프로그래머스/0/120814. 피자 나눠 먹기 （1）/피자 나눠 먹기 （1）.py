def solution(n):
    #피자는 무조건 7조각, 나눠먹을 사람 n
    if (n%7==0):
        answer = n//7
    else :
        answer = n//7 + 1
    return answer