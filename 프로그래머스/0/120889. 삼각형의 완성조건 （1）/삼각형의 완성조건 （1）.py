def solution(sides):
    answer = 0
    
    max_line = max(sides)
    sides.remove(max_line)
    sum_two = sum(sides)
    
    if sum_two > max_line:
        return 1
    else : 
        return 2
    return answer