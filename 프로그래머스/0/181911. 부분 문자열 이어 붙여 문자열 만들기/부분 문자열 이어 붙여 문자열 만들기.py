def solution(my_strings, parts):
    answer = ''
    for i in range(len(my_strings)):
        string = my_strings[i]
        slicer = parts[i]
        answer+=string[slicer[0]:slicer[1]+1]

    return answer