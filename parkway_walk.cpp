#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int t;
  cin >> t;

  while (t--) {
    int n, m;
    cin >> n >> m;

    int arr[n];
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }

    int ans = 0;
    for (int i = 0; i < n - 1; i++) {
      m -= arr[i];
      if (arr[i + 1] > m) {
        int t = arr[i + 1] - m;
        m += t;
        ans += t;
      }
    }

    cout << ans << '\n';
  }
}