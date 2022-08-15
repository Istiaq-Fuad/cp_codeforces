#include <bits/stdc++.h>

using namespace std;

int solution(vector<int>);
int m_solution(vector<int>);

int main() {
  while (true) {
    vector<int> x;
    int n = rand() % 12 + 3;
    for (int i = 0; i < n; i++) {
      x.push_back(rand() % 10);
    }

    for (int i = 0; i < n; i++) {
      cout << x[i] << ' ';
    }

    cout << '\n';

    int res1 = m_solution(x);
    int res2 = solution(x);

    if (res1 != res2) {
      cout << "WRONG ANSWER: " << res1 << ' ' << res2 << '\n';
      break;
    } else
      cout << "OK" << '\n';
  }
}

int m_solution(vector<int> v) {
  int n = v.size();
  unordered_map<int, int> m;
  // for (int i = 0; i < n; i++) {
  //   m[v[i]]++;
  // }
  int ptr = 0;
  for (int i = n - 1; i >= 0; i--) {
    if (v[i - 1] > v[i]) {
      ptr = i;
      break;
    }
  }

  if (ptr == 0) {
    return 0;
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
    // if (v[i] == 0) continue;
    s.insert(v[i]);
  }

  // cout << s.size() << '\n';
  return s.size();
}

int solution(vector<int> a) {
  int n = a.size();

  int lim = 1;
  map<int, int> m;
  int index = 0;
  m[a[0]] = 1;

  for (int j = 1; j < n; j++) {
    if (a[j] < a[j - 1] || (m[a[j]] < lim && m[a[j]] > 0)) {
      lim++;
      index = j;
    }
    m[a[j]] = lim;
  }

  set<int> check;
  for (int j = 0; j < index; j++) {
    check.insert(a[j]);
  }

  // cout << check.size() << "\n";
  return check.size();
}
