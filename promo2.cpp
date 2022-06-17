#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  int n, q;
  cin >> n >> q;

  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  sort(a.begin(), a.end());

  vector<long long> b(n + 1);
  for (int i = 0; i < n; i++) {
    b[i + 1] = b[i] + a[i];
  }

  while (q--) {
    int x, y;
    cin >> x >> y;
    cout << b[n - (x - y)] - b[n - x] << '\n';
  }

  return 0;
}
