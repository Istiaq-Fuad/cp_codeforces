#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;

    map<int, int> m;
    for (int i = 1; i <= n; i++) {
      int temp;
      cin >> temp;
      m[temp] = i;
    }

    int ans = 0;
    for (auto &it : m) {
      if (it.first > k) break;
      if (it.second > k) ans++;
    }

    cout << ans << '\n';
  }
}