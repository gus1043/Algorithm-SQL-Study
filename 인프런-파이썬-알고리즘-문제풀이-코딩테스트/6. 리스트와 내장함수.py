import random as r

'''a=[]
print(a)
b=list()
print(b)

a=[1,2,3,4,5]
print(a)
print(a[0])

b=list(range(1,11))
print(b)

c=a+b
print(c)'''

'''a=[1,2,3,4,5]
a.append(6)
print(a)

a.insert(3, 7) #3번 인덱스에 7
print(a)

a.pop()
print(a)

a.pop(3) #3번 인덱스 pop
print(a)

a.remove(4) #4라는 값을 제거하라
print(a)

print(a.index(5)) #5라는 값은 몇번 인덱스에?'''

'''a=list(range(1,11))
print(sum(a))
print(max(a))
print(min(a))
print(max(1,4,9))

r.shuffle(a)
print(a)
a.sort()
print(a)
a.sort(reverse=True)
print(a)

a.clear() #리스트 다 지우기
print(a)'''

'''a=[23, 12, 36, 53, 19]
print(a[:2])

for x in a:
    print(x, end=" ")
print()

for x in a:
    if x%2==1: #홀수 출력 
        print(x, end=" ")
print()

for x in enumerate(a): #인덱스 번호도 같이 출력 
    print(x)
print()

for index, value in enumerate(a): #인덱스 번호도 같이 출력 
    print(index, value)
print()

#tuple은 소괄호 e.g. b=(1,2,3,4,5)

if all(50>x for x in a): #모두가 참일때 참
    print("yes")
else:
    print("no")

if any(15>x for x in a): #하나라도 참일때 참
    print("yes")
else:
    print("no")'''

a=[0]*10 #10개의 0으로 초기화된 1차원 리스트가 생김
print(a)

#2차원 리스트
a=[[0]*3 for _ in range(3)] #일차원 리스트 세번 반복--> 리스트안 리스트:2차원
print(a)
a[0][1]=1
print(a)

for x in a:
    print(x)
print()

for x in a:
    for y in x:
        print(y, end=" ")
    print()