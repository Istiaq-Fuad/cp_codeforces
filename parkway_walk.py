from sys import stdin, stdout

t = int(stdin.readline())

for _ in range(t):
  n, m = map(int, stdin.readline().strip().split())
  arr = list(map(int, stdin.readline().strip().split()))

  ans = 0
  if n > 1:
    for i in range(n-1):
      m -= arr[i]
      if arr[i + 1] > m:
        r = arr[i + 1] - m
        m += r
        ans += r
  else:
    ans = abs(m - arr[0])

  stdout.write(str(ans))
  stdout.write('\n')
