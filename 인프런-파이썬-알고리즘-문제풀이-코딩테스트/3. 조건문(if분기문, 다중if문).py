'''x=7 
if x==7:
    print(x)
    if x<=10:
        print("<10")
        if x%2==1:
            print("10보다 작은 자연수")

x=10
if (x<=10) & (x%2==0):
    print("10")    

if (x<=10) and (x%2==0):
    print("10 2")    

if 0<x<10:
    print("10보다 작은 자연수")
else: print("아님")'''

A, B, C=map(int, input().split())

if(A==B and B==C):
    print(10000+A*1000)
elif(A==B and A!=C) :
    print(1000+A*100)
elif (A==C and A!=B) :
    print(1000+A*100) 
elif (B==C and A!=B):
    print(1000+B*100) 
else:
    print(max(A,B,C)*100)