t = int(input())

g = 1
d = []
while g < 10**9:
  d.append(g)
  g *= 2


for i in range(t):
  n = int(input())
  a = list(map(int, input().split()))
  nechot = 0
  mina = 0
  for i in range(n):
    if a[i] & 1 == 1:
      nechot += 1
    if nechot == 0:
      j = 0
      mina |= a[i]
  if nechot == 0:
    j = 0
    while mina & d[j] == 0:
      j += 1
    print(j+n-1)
  else:
    print(n-nechot)
