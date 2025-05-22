def solution(n):
    answer = []
    length = len(str(n))-1
    for i in range(length, -1, -1):
        answer.append(int(str(n)[i]))
                      
    return answer