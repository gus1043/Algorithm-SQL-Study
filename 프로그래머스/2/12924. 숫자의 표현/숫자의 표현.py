def solution(n):
    answer = 0
    
    for i in range(n+1):
        temp=0
        j=i+1
        for k in range(j, n+1):
            temp += k
            if temp == n:
                answer+=1
                
                break
            elif temp>n:
                break 
    return answer