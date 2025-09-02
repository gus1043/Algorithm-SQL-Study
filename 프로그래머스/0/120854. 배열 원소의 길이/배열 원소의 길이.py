def solution(strlist):
    answer = [0]*len(strlist)
    for i in range(len(strlist)):
        answer[i]=len(strlist[i])
    return answer