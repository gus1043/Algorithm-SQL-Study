def solution(answers):
    answer = []
    
    first = [1,2,3,4,5]*2000
    second = [2,1,2,3,2,4,2,5]*1250
    thrid = [3,3,1,1,2,2,4,4,5,5]*1000
    
    #answers의 길이로 다 잘라보자
    first=first[:len(answers)]
    second=second[:len(answers)]
    third=thrid[:len(answers)]
    
    #맞는 개수를 찾아야해
    first_correct=0
    second_correct=0
    third_correct=0
    for i in range(len(answers)):
        if answers[i]==first[i]:
            first_correct+=1
        if answers[i]==second[i]:
            second_correct+=1
        if answers[i]==third[i]:
            third_correct+=1
    
    max_= max(first_correct, second_correct, third_correct)
    
    if first_correct == max_ : answer.append(1)
    if second_correct == max_ : answer.append(2)
    if third_correct == max_ : answer.append(3)
        
    return answer