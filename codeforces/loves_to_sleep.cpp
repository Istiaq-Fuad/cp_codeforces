#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  int t;
  cin >> t;
  while (t--) {
    int n, H, M;
    cin >> n >> H >> M;

    int h, m, ansh = 24, ansm = 60;
    for (int i = 0; i < n; i++) {
      cin >> h >> m;

      int hh, mm;
      if (h < H || h == H && m < M)
        hh = 24 - H + h;
      else
        hh = h - H;

      if (m < M) {
        mm = 60 - M + m;
        hh--;
      } else
        mm = m - M;

      if (hh < ansh) {
        ansh = hh;
        ansm = mm;
      } else if (ansh == hh)
        ansm = min(mm, ansm);
    }

    cout << ansh << ' ' << ansm << '\n';
  }
}