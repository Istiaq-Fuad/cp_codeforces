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

    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    int min = min_element(v.begin(), v.end()) - v.begin();

    if (min % 2 != 0 || n % 2 == 1)
      cout << "Mike" << '\n';
    else
      cout << "Joe" << '\n';
  }
}
