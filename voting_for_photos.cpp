#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int likes;
  cin >> likes;
  int photos[likes];

  int i, j, like_count = 0, ans = 1;

  for (i = 0; i < likes; i++) {
    cin >> photos[i];
  }

  for (i = 0; i < likes; i++) {
    int tracker = i;
    int sum = 1;
    for (j = i + 1; j < likes; j++) {
      if (photos[i] == photos[j]) {
        tracker = j;
        sum++;
      }
    }
    // if (sum == like_count && sum + tracker < like_count + ans) {
    //   like_count = sum;
    //   ans = tracker;
    // }
    if (sum > like_count ||
        (sum == like_count && sum + tracker < like_count + ans)) {
      like_count = sum;
      ans = tracker;
    }
  }

  cout << photos[ans] << endl;
}
