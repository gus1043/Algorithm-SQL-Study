import sys

n=sys.stdin.readline()

world=['c=', 'c-', 'dz=', 'd-', 'lj','nj','s=','z=']

for i in world:
    n=n.replace(i, "*")
n=n.strip()

print(len(n))    