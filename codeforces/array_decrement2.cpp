#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int a[n], b[n];
    int c = 0;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) {
      cin >> b[i];
      c = max(a[i] - b[i], c);
    }
    bool x = true;
    for (int i = 0; i < n; i++) {
      if (a[i] - b[i] != c && b[i] != 0) {
        x = false;
        break;
      }
    }
    if (x == true)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }
}
