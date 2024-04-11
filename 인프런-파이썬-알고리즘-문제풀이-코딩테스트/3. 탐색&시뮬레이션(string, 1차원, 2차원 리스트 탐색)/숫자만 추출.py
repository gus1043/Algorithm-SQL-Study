import sys

n=sys.stdin.readline()
str=""
list=[]
for i in n:
    if i.isdecimal():
        str+=i
str=int(str)

for i in range(1, str+1):
    if str%i==0:
        list.append(i)

print(str)
print(len(list))