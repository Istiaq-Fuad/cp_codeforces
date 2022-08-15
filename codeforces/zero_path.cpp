#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  int t;
  cin >> t;
  while (t--) {
    int n, m;
    cin >> n >> m;

    int arr[n][m], sum = 0;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        cin >> arr[i][j];
        sum += arr[i][j];
      }
    }

    int prev_sum = 0;
    int fix = 0;
    for (int j = 0; j < m; j++) prev_sum += arr[fix][j];
    // cout << prev_sum << ' ' << sum << '\n';

    if (sum != 0 || (n == 1 && prev_sum != 0)) {
      cout << "NO" << '\n';
      continue;
    }

    int next_sum = prev_sum;
    bool flag = 1;
    for (int i = 1; i < n; i++) {
      if (next_sum < prev_sum) {
        cout << "NO" << '\n';
        flag = 0;
        break;
      }
      next_sum = 0;
      for (int j = 0; j < m; j++) {
        next_sum += arr[i][j];
      }
    }

    if (flag) cout << "YES" << '\n';
  }
}
