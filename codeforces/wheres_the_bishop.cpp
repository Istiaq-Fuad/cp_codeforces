#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  int t;
  cin >> t;

  while (t--) {
    char cb[8][8];

    for (int i = 0; i < 8; i++) {
      for (int j = 0; j < 8; j++) {
        cin >> cb[i][j];
      }
    }

    int arr[8];
    for (int i = 0; i < 8; i++) {
      int count = 0;
      for (int j = 0; j < 8; j++) {
        if (cb[i][j] == '#') count++;
      }
      arr[i] = count;
    }

    int row;
    for (int i = 1; i < 7; i++) {
      if (arr[i] == 1 && arr[i - 1] == 2 && arr[i + 1] == 2) row = i;
    }

    int col;
    for (int j = 1; j < 7; j++) {
      if (cb[row][j] == '#') col = j;
    }

    cout << row + 1 << ' ' << col + 1 << '\n';
  }
}