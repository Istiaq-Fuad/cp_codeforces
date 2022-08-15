#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int t;
  cin >> t;

  while (t--) {
    int n, k;
    cin >> n >> k;

    int arr[n], pointer, max = 0;
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
      if (arr[i] > max) {
        pointer = i;
        max = arr[i];
      }
    }
  }
}