import math

for _ in range(int(input())):
  n = int(input())
  x = n/3
  y = math.ceil(x)+1
  z = math.floor(x)-1
  print(f'{n-y-z} {y} {z}')

