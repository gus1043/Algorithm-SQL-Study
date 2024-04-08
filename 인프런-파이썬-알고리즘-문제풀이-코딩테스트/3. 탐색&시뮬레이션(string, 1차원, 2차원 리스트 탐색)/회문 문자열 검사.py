# 회문 문자열 검사
#N개의 문자열 데이터를 입력받아 앞에서 읽을때나 뒤에서 읽을 때나 같은 경우이면 YES 아니면 NO 
# 대소문자 구분은 하지 않음

#입력 설명 
#첫줄에는 정수 N(1<=N<=20)이 주어지고, 다음 줄 부터는 N개의 단어가 입력된다. 길이는 100을 넘지 않음

#출력 설명
#각 줄에 해당 문자열의 결과를 YES or NO


# 입력예제 1 
# 5 
# level 
# moon 
# abcba 
# soon 
# gooG 

# 출력예제 1 
#1 YES 
#2 NO 
#3 YES 
#4 NO 
#5 YES

import sys 
N=int(sys.stdin.readline())
for i in range(N):
    print("글을 입력하세여: ")
    temp=sys.stdin.readline().strip()
    temp=temp.upper()
    size=len(temp)
    for j in range(size//2):
        if (temp[j]!=temp[-1-j]):
            print(temp+" NO")
            break
    else: #break를 만나지 않고 모든 반복 완료 할때 실행 
        print(temp, "yes")
        