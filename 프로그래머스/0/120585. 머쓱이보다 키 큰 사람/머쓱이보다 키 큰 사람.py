def solution(array, height):
    
    count = [num for num in array if num>height]
    answer = len(count)
    return answer