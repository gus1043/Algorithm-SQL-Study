def solution(numbers):
    max_1 = max(numbers)
    print(max_1)
    numbers.remove(max_1)
    print(numbers)
    max_2=max(numbers)
    print(max_2)
    answer = max_1 * max_2
    return answer