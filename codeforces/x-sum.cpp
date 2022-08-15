#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int x[] = {-1, -1, 1, 1};
  int y[] = {-1, 1, -1, 1};

  int t;
  cin >> t;

  while (t--) {
    int n, m, i, j, k;
    cin >> n >> m;
    int arr[n][m];

    for (i = 0; i < n; i++) {
      for (j = 0; j < m; j++) {
        cin >> arr[i][j];
      }
    }

    int ans = 0;
    for (i = 0; i < n; i++) {
      for (j = 0; j < m; j++) {
        int sum = arr[i][j];
        for (k = 0; k < 4; k++) {
          int o = i + x[k];
          int p = j + y[k];
          while (o >= 0 && o < n && p >= 0 && p < m) {
            sum += arr[o][p];
            o += x[k];
            p += y[k];
          }
        }
        ans = max(ans, sum);
      }
    }
    cout << ans << endl;
  }
  return 0;
}

