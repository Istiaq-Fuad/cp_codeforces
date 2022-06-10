#include <bits/stdc++.h>

// typedef long long int LL;
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int t;
  cin >> t;

  while (t--) {
    int x, ans = 0;
    cin >> x;
    int y = x;
    if (x == 1) {
      cout << 3 << '\n';
      continue;
    }

    int count = 0;
    while ((x & 1) < 1) {
      count += 1;
      x = x / 2;
    }
    ans = pow(2, count);
    if (ans == y) ans++;

    cout << ans << '\n';
  }
}