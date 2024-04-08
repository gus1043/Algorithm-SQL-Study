# import sys

# count=0
# N=int(sys.stdin.readline().strip())

# for i in range(2, N+1):
#     for j in range(2, i):
#         if(i%j==0):
#             break
#     else:
#         print(i)
#         count+=1
# print(count)

import sys

count=0
N=int(sys.stdin.readline().strip())

ch=[0]*(N+1)

for i in range(2, N+1):
    if ch[i]==0:
        count+=1
        for j in range(i,N+1, i): #i의 배수로 돈다
            ch[j]=1
print(count)