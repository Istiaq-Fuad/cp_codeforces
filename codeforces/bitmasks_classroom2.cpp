#include <bits/stdc++.h>
using namespace std;

main() {
  int x, y;
  cin >> x;
  while (cin >> x) {
    int y = x & -x;
    if (y == x) y++;
    if (x == 1) y++;
    cout << y << '\n';
  }
}