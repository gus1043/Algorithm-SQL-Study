def solution(s):
    answer = ''
    count=len(s)//2
    if (len(s)%2==0):
        # 짝수일때
        answer=(s[count-1]+s[count])
    else:
        # 홀수일때
         answer=(s[count])
    
        
    return answer