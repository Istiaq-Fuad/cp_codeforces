#include <bits/stdc++.h>

using namespace std;

int solution(vector<int>);

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
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++) {
      cin >> v[i];
    }

    int ptr = 0;
    for (int i = n - 1; i >= 0; i--) {
      if (v[i - 1] > v[i]) {
        ptr = i;
        break;
      }
    }

    if (ptr == 0) {
      cout << 0 << '\n';
      continue;
    }

    for (int i = 0; i < ptr; i++) {
      m[v[i]]++;
    }

    for (int i = n - 1; i >= ptr; i--) {
      if (m[v[i]] > 0) {
        ptr = i;
        break;
      }
    }

    set<int> s;
    for (int i = 0; i < ptr; i++) {
      s.insert(v[i]);
    }

    cout << s.size() << '\n';
  }
}
