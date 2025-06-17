import sys

N = int(sys.stdin.readline())  # 이동할 채널 번호
M = int(sys.stdin.readline())  # 고장난 버튼 개수

if M > 0:
    broken = list(sys.stdin.readline().split())
else:
    broken = []

current = 100
min_press = abs(N - current)

def can_press(num_str):
    for ch in num_str:
        if ch in broken:
            return False
    return True

for i in range(1000001):  # 범위를 좀 더 넓힘
    num_str = str(i)
    if can_press(num_str):
        press = len(num_str) + abs(i - N)
        min_press = min(min_press, press)

print(min_press)
