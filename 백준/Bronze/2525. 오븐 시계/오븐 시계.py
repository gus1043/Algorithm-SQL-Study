A, B=map(int, input().split())
C=int(input())

k=B+C
if(k >= 60):
    A = A+(k//60)
    k=k%60
    
print(A%24, k)