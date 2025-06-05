import sys

#첫째 줄에 N
#둘째 줄에 S의 길이 M
#셋째 줄에 S
#Pn : N+1 개의 I와 N개의 o가 교대로 나오는 문자열

N=int(sys.stdin.readline())
M=int(sys.stdin.readline())
S=sys.stdin.readline()
answer =0 

#pn 만들기
Pn=""
I=N+1
O=N
for i in range( 2*N+1):
    if i%2==0:
        Pn+="I"
        I-=1
    else : 
        Pn+="O"
        O-=1

for i in range(M-1):
    if S[i:2*N+1+i]==Pn:
        
        answer += 1

print (answer)

