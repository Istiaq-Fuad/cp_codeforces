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

    int arr[n];
    set<int> s;
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
      s.insert(arr[i]);
    }

    if ((n - s.size()) % 2 != 0) {
      cout << s.size() - 1 << '\n';
    } else {
      cout << s.size() << '\n';
    }
  }
}