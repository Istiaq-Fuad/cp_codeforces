n = int(input())
k = list(map(int, input().split()))
d = dict.fromkeys(k, 0)
mx = 0
mj = 0
for i in k:
  d[i] += 1
  if d[i] > mx:
    mx = d[i]
    mj = i
print(mj)
