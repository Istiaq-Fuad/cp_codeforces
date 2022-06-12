#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int n, q;
  cin >> n >> q;

  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  sort(arr, arr + n, greater<int>());

  while (q--) {
    int x, y;
    cin >> x >> y;

    int ans = 0;
    for (int j = x - 1; j >= (x - y); j--) {
      ans += arr[j];
    }

    cout << ans << '\n';
  }
}