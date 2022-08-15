#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);

  int counter = 0;
  while (t--) {
    char s[4];
    scanf("%s", s);

    if (s[1] == '+')
      counter++;
    else
      counter--;
  }

  printf("%d\n", counter);
}