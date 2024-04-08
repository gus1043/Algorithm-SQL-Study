import sys

n=int(sys.stdin.readline())
list= list(map(int, sys.stdin.readline().split()))
temp=1
score=0
for i in list:
    if i==0:
        temp=1
    elif(i==1 and temp==0):
        score+=1
        temp+=1
    else:
        score+=temp
        temp+=1     
    
    
print(score)

# import sys

# n=int(sys.stdin.readline())
# list= list(map(int, sys.stdin.readline().split()))
# temp=0
# score=0

# for i in list:
#     if i==1:
#         temp+=1
#         score+=temp
#     else:
#         temp=0
# print(score)