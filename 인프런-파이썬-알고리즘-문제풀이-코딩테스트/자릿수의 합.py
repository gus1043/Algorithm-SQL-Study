import sys

N=int(sys.stdin.readline())
list=list(map(str, sys.stdin.readline().split()))
temp=0
ans=0
for i in list:
    test=[int(k) for k in str(i)]
    test=sum(test)
    if(test>temp):
        ans=i
print(ans)
        
