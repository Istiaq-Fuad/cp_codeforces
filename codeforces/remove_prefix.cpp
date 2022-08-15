#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  int t;
  cin >> t;

  while (t--) {
    int n, count = 0, num;
    cin >> n;

    unordered_map<int, int> m;

    for (int i = 1; i <= n; i++) {
      cin >> num;
      if (m[num] > count) count = m[num];
      m[num] = i;
    }

    cout << count << '\n';
  }
}
