
from sys import stdin, stdout


def get_ints(): return map(int, stdin.readline().strip().split())


# next both line can be used to take user input
n, m = map(int, input().split())
# [n, m] = [int(x) for x in stdin.readline().split()]
print(type(n), type(m))

arr = list(map(int, input().split()))
arr.sort(reverse=True)

prefix = [0]
for el in arr:
  prefix.append(prefix[-1] + el)


for _ in range(m):
  a, b = map(int, input().split())
  print(prefix[a]-prefix[a-b])
