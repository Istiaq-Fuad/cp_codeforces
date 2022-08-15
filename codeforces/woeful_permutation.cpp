#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b) {
  if (b == 0) return a;
  return gcd(b, a % b);
}

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
    unordered_map<int, vector<int> > m;
    for (int i = 0; i < n; i++) {
      cin >> v[i];
      m[v[i]].push_back(i);
    }

    int el_num = set<int>(v.begin(), v.end()).size();

    int ans = n - 1;
    int counter = v[n - 1];
    for (int i = n - 2; i >= 0; i--) {
      if (v[i] > counter) break;
      ans--;
      counter = v[i];
    }    

    cout << ans << '\n';
  }
}