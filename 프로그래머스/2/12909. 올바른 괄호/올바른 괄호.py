def solution(s):
    answer = True
    s = list(s)
    stack = []
    for i in s:
        if i == "(":
            stack.append(i)
        elif len(stack) == 0:
            answer = False 
            break
        else: stack.pop()
    if len(stack)!=0: answer=False
    return answer