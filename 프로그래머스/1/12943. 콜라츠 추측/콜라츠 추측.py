def solution(num):
    answer = 0
    count = 0 
    
    if num == 1:
        return 0 

    while num!=1 and count<500:
        if num%2==0:
            num=num/2
        else: num=num*3+1
        count+=1
    
    if count == 500:
        return -1
    else : answer = count
    
    return answer