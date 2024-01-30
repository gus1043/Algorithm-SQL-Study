msg="It is time"
print(msg.upper())
print(msg.lower())
tmp=msg.lower()
tmp2=msg.upper()

#값이 있는 지 찾기, 값 갯수 찾기
print(tmp.find('T')) #-1이 나오면 없는 거
print(tmp2.find('T'))
print(tmp2.count('T'))
print(msg[:2])

for i in range(len(msg)):
    print(msg[i], end='')
print()

for x in msg:
    print(x, end='')
print()

for x in msg:
    if x.isupper():
        print(x)

tmp="AZ"
for x in tmp:
    print(ord(x)) #ord:ASCII NUMBER A:65 Z:90

tmp="az"
for x in tmp:
    print(ord(x)) #ord:ASCII NUMBER A:65 Z:90

tmp=65
print(chr(tmp)) #ASCII NUMBER 에 따른 알파벳 출력