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

    vector<int> v;
    for (int i = 0; i < n; i++) {
      int temp;
      cin >> temp;
      v.push_back(temp);
    }

    long long ans = v[0];

    for (int i = 1; i < v.size(); i++) {
      ans += max(v[i] - v[i - 1], 0);
    }

    int min = *max_element(v.begin(), v.end());

    if (min >= ans)
      cout << "YES" << '\n';
    else
      cout << "NO" << '\n';
  }
}