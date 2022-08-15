#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int t, n;
  cin >> t;
  while (t--) {
    cin >> n;
    int x = 2, y, z = 1;
    y = n - x - z;
    while (y > x && x > z && x + y + z == n) {
      y = y - 2;
      x++;
      z++;
    }

    x--;
    z--;
    y += 2;

    if (y > x + 2) {
      y--;
      x++;
    }

    cout << x << ' ' << y << ' ' << z << '\n';
  }
}