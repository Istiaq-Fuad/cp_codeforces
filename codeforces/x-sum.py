for _ in range(int(input())):
  n, m = map(int, input().split())
  ans = 0
  r = []
  dr = [0]*(n+m*2)
  dl = [0]*(n+m*2)
  for i in range(n):
    r.append([*map(int, input().split())])
  for i in range(n):
    for j in range(m):
      dr[i + j] += r[i][j]
      dl[i - j] += r[i][j]
  for i in range(n):
    for j in range(m):
      ans = max(ans, dr[i + j] + dl[i-j] - r[i][j])
  print(ans)
