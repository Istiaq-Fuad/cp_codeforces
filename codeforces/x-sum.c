#include <stdio.h>

int main() {
  int a, m, n;
  scanf("%d", &a);
  int x[] = {-1, -1, 1, 1};
  int y[] = {-1, 1, -1, 1};
  for (int i = 0; i < a; i++) {
    int j, k, ans = 0;
    scanf("%d%d", &m, &n);
    int mat[m][n];
    for (j = 0; j < m; j++) {
      for (k = 0; k < n; k++) {
        scanf("%d", &mat[j][k]);
      }
    }

    for (j = 0; j < m; j++) {
      for (k = 0; k < n; k++) {
        int sum = mat[j][k];
        for (int c = 0; c < 4; c++) {
          int row = j + x[c];
          int col = k + y[c];
          while (row >= 0 && row < m && col >= 0 && col < n) {
            sum += mat[row][col];
            row += x[c];
            col += y[c];
          }
        }
        ans = sum > ans ? sum : ans;
      }
    }

    printf("%d\n", ans);
  }

  return 0;
}