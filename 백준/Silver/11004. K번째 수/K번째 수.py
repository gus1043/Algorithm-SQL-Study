import sys

N, K = map( int, sys.stdin.readline().split() )

list=list(map(int, sys.stdin.readline().split()))

list.sort()
print(list[K-1])