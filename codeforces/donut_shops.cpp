#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int t;
  cin >> t;

  while (t--) {
    int a, b, c, aout, bout;
    cin >> a >> b >> c;

    if (c < a) {
      aout = -1;
      bout = 1;
    }

    if (c == a) {
      aout = -1;
      bout = 2;
    }

    if (c > a) {
      if (a <= c / b) {
        aout = 1;
        bout = -1;
      } else {
        aout = 1, bout = b;
      }
    }

    cout << aout << ' ' << bout << '\n';
  }
}