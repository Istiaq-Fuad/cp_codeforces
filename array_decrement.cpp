#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int t;
  cin >> t;

  while (t--) {
    int n, j;
    cin >> n;

    int a[n];
    for (j = 0; j < n; j++) {
      cin >> a[j];
    }

    int b[n];
    for (j = 0; j < n; j++) {
      cin >> b[j];
    }

    int prev_count = a[0] - b[0];
    bool tracker = true;

    for (int i = 0; i < n; i++) {
      int count = a[i] - b[i];
      if (count < 0) {
        cout << "NO" << '\n';
        tracker = false;
        break;
      }

      if (count > prev_count && b[i - 1] == 0) continue;
      if (count < prev_count && b[i] == 0) continue;

      if (prev_count != count) {
        cout << "NO" << '\n';
        tracker = false;
        break;
      }

      prev_count = count;
    }

    if (tracker) cout << "YES" << '\n';
  }

  return 0;
}