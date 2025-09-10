def solution(food):
    answer = ''
    
    k = 0
    for i in range(len(food)):
        for j in range(food[i]//2):
            if (i>0):
                answer+=str(i)
                
    answer+="0"
    
    for i in range(len(food)-1,0,-1):
        for j in range(food[i]//2):
            if (i>0):
                answer+=str(i)
                
    return answer