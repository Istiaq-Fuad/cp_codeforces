#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;

    int v1 = 0, v2 = 0, v3 = 0, v4 = 0;

    for (int i = 0; i < n; i++) {
      int xi, yi;
      cin >> xi >> yi;
      int d = abs(xi) + abs(yi);
      if (xi == 0 && yi < 0)
        v1 = max(v1, d);
      else if (xi == 0 && yi > 0)
        v2 = max(v2, d);
      else if (yi == 0 && xi > 0)
        v3 = max(v3, d);
      else if (yi == 0 && xi < 0)
        v4 = max(v4, d);
    }

    // cout << v1 << v2 << v3 << v4 << '\n';

    int sum = 2 * (v1 + v2 + v3 + v4);

    cout << sum << '\n';
  }
}
