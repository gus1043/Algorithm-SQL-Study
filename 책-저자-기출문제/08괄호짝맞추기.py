def isEmpty(stack):
    bool = False
    if len(stack) == 0 : bool = True
    return bool

def solution(str):
    stack=[]
    print(stack)
    for i in range(len(str)):
        if str[i] == "(":
            stack.append(str[i])
            print(stack)
        elif str[i] == ")" and stack[-1] == "(":
            stack.pop()
            print(stack)

        answer = isEmpty(stack)
    return answer 
# TEST 코드 입니다. 주석을 풀고 실행시켜보세요
print(solution('(())()')) 
# 반환값 : True
print(solution('((())()')) 
# 반환값 : False