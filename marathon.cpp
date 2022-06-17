#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  int t;
  cin >> t;

  while (t--) {
    int taimur;
    cin >> taimur;

    int ans = 0;
    for (int i = 0; i < 3; i++) {
      int temp;
      cin >> temp;
      if (temp > taimur) ans++;
    }

    cout << ans << '\n';
  }
}