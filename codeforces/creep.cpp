#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  int t;
  cin >> t;

  while (t--) {
    int a, b;
    cin >> a >> b;

    int s = a + b;
    for (int i = 0; i < s; i++) {
      if (i % 2 == 0 && b != 0) {
        cout << 1;
        b--;
      }

      // cout << "b:  " << b << endl;

      if (i % 2 != 0 && a != 0) {
        cout << 0;
        a--;
      }

      // cout << "a:  " << a << endl;
      if (a == 0 || b == 0) break;
    }

    if (a != 0)
      while (a--) cout << 0;
    if (b != 0)
      while (b--) cout << 1;
    cout << '\n';
  }
}