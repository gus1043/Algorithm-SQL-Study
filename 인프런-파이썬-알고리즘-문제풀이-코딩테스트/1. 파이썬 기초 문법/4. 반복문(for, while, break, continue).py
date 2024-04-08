'''a = range(10) #0-9
print(list(a))

a = range(1, 10) #1-9
print(list(a))

for i in range(10):
    print(i)

for i in range(1, 11):
    print(i)

for i in range(10, 0, -1):
    print(i)

i=1
while i<10:
    print(i)
    i+=1

i=1
while True:
    print(i)
    i+=1
    if i==5:
        break

for i in range(1,11):
    if i%2==0:
        continue #출력 안하고 그냥 지나감
    print(i)

# for else 구문 
for i in range (1, 11):
    print(i)
    if i==5:
        break
else:
    print(11) #break로 종료되면 11 출력 안함

for i in range (1, 11):
    print(i)
    if i>15:
        break
else:
    print(11) #정상 종료되면 11출력 '''


'''#1부터 N까지 홀수 출력하기
N = int(input())
for i in range(N+1):
    if(i%2==0):
        continue
    print(i)'''

'''#1부터 N까지의 합 구하기
N=int(input())
M=0
for i in range(1, N+1):
    M+=i
print(M)'''

'''#N의 약수 구하기
N=int(input())
for i in range(1, N+1):
    if N%i==0:
        print(i, end=" ")'''

'''#중첩 반복문(2중 for문)
for i in range(5):
    print("i:", i, sep="", end=" ")
    for j in range(5):
        print("j:", j, sep="", end=" ")
    print()'''

'''for i in range(5):
    for j in range(i+1):
        print("*", end=" ")
    print()
'''
'''for i in range(5,0,-1):
    for j in range(i):
        print("*", end=" ")
    print()'''

