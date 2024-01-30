a = 1
A = 2
print (a, A)

a, b, c = 3, 2, 1
print(a,b,c)

#값 교환
a,b = 10, 20
print (a,b )
a, b = b, a 
print(a,b )

#변수 타입
a = 12345
print(type(a))
a=12,1234543
print(type(a)) #실수, 8바이트 까지만, 이후 데이터는 손실
a="student"
print(type(a))

#출력 방식
print ("number")
a, b, c= 1,2,3
print(a,b,c)
print("number:", a,b,c)
print(a,b,c, sep=',')
print(a,b,c, sep='\n')
print(a, end=' ') #end는 옆으로 한칸
print(a, end=' ')
