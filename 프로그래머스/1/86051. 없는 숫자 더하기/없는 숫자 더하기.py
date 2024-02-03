def solution(numbers):
    answer = -1
    max=0
    for i in range(10):
        max+=i
    for i in numbers:
        max-=i
    answer=max
    print(answer)
    return answer