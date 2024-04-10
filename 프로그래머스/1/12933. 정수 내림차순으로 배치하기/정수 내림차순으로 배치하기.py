def solution(n):
    newnum = sorted(list(str(n)[::1]))
    count=0
    answer=0
    for i in newnum: 
        answer += int(i)*10**count 
        count+=1
    return answer