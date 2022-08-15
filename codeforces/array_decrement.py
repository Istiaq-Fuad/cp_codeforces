t = int(input())
while t:
  n = int(input())
  x, y = list(map(int, input().split())), list(map(int, input().split()))
  answ = all(x[i] >= y[i] for i in range(n))
  mx = max([x[i] - y[i] for i in range(n)])
  for i in range(n):
    x[i] = max(x[i] - mx, 0)
  answ = answ and (x == y)
  print(["NO", "YES"][answ])
  t -= 1
