#include <bits/stdc++.h>

using namespace std;

int t, n, m;
int v[202][202];

int main() {
  cin >> t;
  while (t--) {
    cin >> n >> m;
    map<int, int> lol;
    map<int, int> lol2;
    for (int i = 1; i <= n; i++)
      for (int j = 1; j <= m; j++) {
        cin >> v[i][j];
        lol[i + j] += v[i][j];
        lol2[i - j] += v[i][j];
      }
    int ans = 0;
    for (int i = 1; i <= n; i++)
      for (int j = 1; j <= m; j++)
        ans = max(ans, lol[i + j] + lol2[i - j] - v[i][j]);
    cout << ans << "\n";
  }
  return 0;
}