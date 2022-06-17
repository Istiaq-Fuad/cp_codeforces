#include <bits/stdc++.h>

using namespace std;

bool ispalindrome(string s) {
  string t = s;
  reverse(s.begin(), s.end());
  for (int i = 0; i < s.size(); i++)
    if (s[i] != t[i]) return 0;
  return 1;
}

int main() {
  int t;
  scanf("%d", &t);

  while (t--) {
    int incm, hh, mm;
    scanf("%d:%d %d", &hh, &mm, &incm);
    int inch = incm / 60;

    int ite = (24 * 60) / incm;

    int ans = 0;

    int hc = hh;
    int mc = mm;
    while (true) {
      hh += inch;
      mm += (incm % 60);
      if (mm >= 60) {
        mm -= 60;
        hh++;
      }
      if (hh >= 24) hh -= 24;

      string s;
      if (hh < 10) s += '0';
      s += to_string(hh);

      if (mm < 10) s += '0';
      s += to_string(mm);

      if (ispalindrome(s)) ans++;
      if (hc == hh && mc == mm) break;
    }

    printf("%d\n", ans);
  }
}
