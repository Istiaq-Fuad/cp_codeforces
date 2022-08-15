for _ in range(int(input())):
  n = int(input())
  a = (n-3)//3
  r = (n-3) % 3
  print(a+(r//2)+1, a+(r//2)+(r % 2)+2, a)
