#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int t;
  cin >> t;

  while (t--) {
    int n, ans;
    cin >> n;

    int temp, even_count = 0, Min = INT_MAX;
    while (n--) {
      cin >> temp;
      if (temp % 2 == 0) {
        even_count++;
        int making_odd = 0;
        while (temp % 2 == 0) {
          temp /= 2;
          making_odd++;
        }
        Min = min(Min, making_odd);
      }
    }

    if (even_count != n)
      ans = even_count;
    else
      ans = Min + n - 1;

    cout << ans << '\n';
  }
}