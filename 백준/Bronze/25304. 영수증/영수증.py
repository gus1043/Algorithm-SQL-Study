X=int(input())
N=int(input())

i=0
m=0
while i<N:
    a,b=map(int, input().split())
    m+=a*b
    i+=1

if(X==m):
    print("Yes")
else:
    print("No")