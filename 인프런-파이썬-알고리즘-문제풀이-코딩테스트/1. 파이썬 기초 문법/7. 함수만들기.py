'''def add(A, B):
    sum = A+B
    #print(sum)
    return sum

add(3, 4)
print(add(3,4))
x=add(2,4)
print(int(x))


def isMax(x):
    return max(x)

def isPrime(x): #소수
    for i in range(2,x):
        if(x%i)==0:
            return False
    return True


a=[12, 13, 7, 9, 19]

for x in a:
    if isPrime(x):
        print(x, end=" ")'''

#람다 함수
plus_two=lambda x: x+2
print(plus_two(1))

def plus_one(x):
    return x+1

a=[1,2,3]
print(list(map(plus_one, a)))
print(list(map(lambda x:x+1, a)))