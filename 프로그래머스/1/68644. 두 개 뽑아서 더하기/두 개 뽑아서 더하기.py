def solution(numbers):
    answer = []
    revers_list = list(reversed(numbers))
    # print(numbers)
    # print(revers_list)
    for i in range(len(numbers)):
        for j in range(len(numbers)-i-1):
            answer.append(numbers[i]+revers_list[j])
            
    answer=list(set(answer))
    answer.sort()
            
    return answer