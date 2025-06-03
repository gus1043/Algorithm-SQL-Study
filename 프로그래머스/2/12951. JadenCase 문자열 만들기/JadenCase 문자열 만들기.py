def solution(s):
    answer = ''
    for i in range(len(s)):
        if i==0 :
            answer+=s[i].upper()
        else:
            j=i-1
            if s[j]==' ':
                answer+=s[i].upper()
            else: answer+=s[i].lower()

    return answer