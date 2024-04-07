import sys

n=int(sys.stdin.readline().strip())
nums=list(map(int, sys.stdin.readline().split()))
list=[]


def reverse(x) :
    k=str(x)
    return int(k[::-1])

def isPrime(y):
    if y==1:
        return False
    for i in range(2, y//2+1):
        if y%i==0:
            return False
    else : return True

for i in nums:
    temp=reverse(i)
    if(isPrime(temp)):
        list.append(temp)
        
print(*list)