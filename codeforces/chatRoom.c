#include <stdio.h>
int main()
{
  int i = 0;
  char a[5] = "hello", c;
  while (scanf("%c", &c) && c != '\n')
  {
    if (c == a[i])
      i++;
  }
  if (i == 5)
    printf("YES");
  else
    printf("NO");
}