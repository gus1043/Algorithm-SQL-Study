def solution(s):
    answer = []
    alphabet = {}
    
    for i in range(len(s)):
        if s[i] in alphabet:
            answer.append(i-alphabet[s[i]])
            alphabet[s[i]]=i
        else:
            answer.append(-1)
            alphabet[s[i]]=i
    return answer