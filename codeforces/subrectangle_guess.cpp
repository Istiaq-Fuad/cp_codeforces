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

    int arr[n][m];
    int max_val = INT_MIN;
    int mi = 0, mj = 0;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        cin >> arr[i][j];
        if (arr[i][j] > max_val) {
          max_val = arr[i][j];
          mi = i + 1, mj = j + 1;
        }
      }
    }

    mi = max(mi, n - mi + 1);
    mj = max(mj, m - mj + 1);

    // cout << max_val << ' ' << mi << ' ' << mj << '\n';

    // int hw = (!(n - mi) ? mi : n - mi) * (!(m - mj) ? mj : m - mj);
    int hw = mi * mj;
    cout << hw << '\n';
  }
}
