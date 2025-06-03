def solution(s):
    answer = 0
    temp=[]
    for i in s:
        if len(temp)==0 or temp[-1]!=i:
                temp.append(i)
        elif temp[-1]==i:
            temp.pop()
                
    if len(temp)==0: 
        answer=1
        
    return answer