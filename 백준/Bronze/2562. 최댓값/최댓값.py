import sys
A=[]
for i in range(9):
    A.append(int(sys.stdin.readline()))

max=max(A)
print(max)
print(A.index(max)+1)