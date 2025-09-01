def solution(my_string, s, e):
    answer = ''
    
    item = my_string[:s]
    item2 = ''.join(reversed(my_string[s:e+1]))
    item3 = my_string[e+1:]

    answer = item+item2+item3
    
    return answer