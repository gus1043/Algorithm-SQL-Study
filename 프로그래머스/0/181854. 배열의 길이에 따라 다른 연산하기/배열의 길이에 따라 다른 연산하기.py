def solution(arr, n):
    if len(arr) % 2 == 0:
        answer = [x + n if i % 2 == 1 else x for i, x in enumerate(arr)]
    else:
        answer = [x + n if i % 2 == 0 else x for i, x in enumerate(arr)]
    return answer
