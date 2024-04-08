
a=input("숫자를 입력하세요:")
print(a)

a, b= input("숫자를 입력하세요:").split() #띄어쓰기로 입력, String
print(a,b)

a, b=map(int, input("숫자를 입력하세요 :").split())
print(a+b)
print(a/b) #나누기
print(a//b) #몫
print(a%b) #나머지 
print(a**b) #a의 b제곱