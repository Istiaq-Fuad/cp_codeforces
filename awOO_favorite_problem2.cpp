#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int t, n;
  cin >> t;

  while (t--) {
    cin >> n;
    string s, t;
    cin >> s >> t;

    for (int i = 0; i < n; i++) {
      if (s[i] != t[i] && i < n - 1) {
        int j = i + 1;
        while (j < n && s[j] == s[i]) j++;
        cout << "i: " << i << "     "
             << "j: " << j << '\n';
        if (j < n && s[j] == t[i] && s[j] == s[i] + 1) swap(s[j], s[i]);
        cout << s << '\n';
      }
    }

    if (s == t)
      cout << "YES" << '\n';
    else
      cout << "NO" << '\n';
  }
  return 0;
}
