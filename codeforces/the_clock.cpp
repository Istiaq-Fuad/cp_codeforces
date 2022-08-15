/**
 * ERROR: segmentation fault (core dumped)
 * TODO: find the segementation fault
 **/

#include <bits/stdc++.h>

using namespace std;

bool ispalindrome(string s) {
  string t = s;
  reverse(s.begin(), s.end());
  for (int i = 0; i < s.size(); i++)
    if (s[i] != t[i]) return 0;
  return 1;
}

int hh, mm;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  int t;
  cin >> t;

  while (t--) {
    int clock[4], count = 0;
    char *ptr;
    cin >> ptr;

    for (int i = 0; i < 5; i++) {
      if (i == 2) {
        ptr++;
        continue;
      }
      clock[count] = *(ptr++) - '0';
      count++;
    }

    cout << clock[0] << clock[1] << clock[2] << clock[3] << '\n';

    hh = (clock[0] * 10) + clock[1];
    mm = (clock[2] * 10) + clock[3];

    cout << hh << ' ' << mm << '\n';

    int incm;
    cin >> incm;
    int inch = incm / 60;

    int ite = (24 * 60) / incm;

    int ans = 0;

    for (int i = 0; i < ite; i++) {
      hh += inch;
      mm += (incm % 60);
      if (mm > 60) {
        mm -= 60;
        hh++;
      }
      if (hh > 23) hh -= 24;

      string s;
      if (hh < 10) s += '0';
      s += to_string(hh);

      if (mm < 10) s += '0';
      s += to_string(mm);

      if (ispalindrome(s)) ans++;
    }

    cout << ans << '\n';
  }
}

// 6
// 03:12 360      1
// 00:00 1        16
// 13:22 2        10
// 15:15 10        0
// 11:11 1440      1
// 22:30 27        1