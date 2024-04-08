import sys

n=int(sys.stdin.readline())

temp=0
answer=0
for i in range(n):
    temp=sys.stdin.readline().split()
    temp.sort()
    a,b,c=map(int, temp)
    if (a==b and b==c):
        temp=10000+a*1000
    elif (a==b and b!=c or a!=b and  b==c ):
        temp=1000+(a*100)
    elif (a!=b and  b==c ):
        temp=1000+(b*100)
    elif(a==c and b!=a):
        temp=1000+(a*100)
    else: 
        temp=max(a,b,c)*100
    
    if (temp>answer):
        answer=temp

print(answer)