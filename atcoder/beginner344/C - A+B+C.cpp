// Problem: C - A+B+C
// Contest: 	Toyota Programming Contest 2024#3（AtCoder Beginner Contest
// 344） Judge: AtCoder URL: https://atcoder.jp/contests/abc344/tasks/abc344_c
// Memory Limit: 1024
// Time Limit: 2000
// Start: Sat Mar  9 17:56:07 2024

#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;
  vector<int> va(n);
  for (int i = 0; i < n; i++) {
    cin >> va[i];
  }
  int m;
  cin >> m;
  vector<int> vb(m);
  for (int i = 0; i < m; i++) {
    cin >> vb[i];
  }
  int l;
  cin >> l;
  vector<int> vc(l);
  for (int i = 0; i < l; i++) {
    cin >> vc[i];
  }
  int q;
  cin >> q;
  vector<int> vx(n);
  for (int i = 0; i < q; i++) {
    cin >> vx[i];
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      for (int k = 0; k < l; k++) {
        for (int t = 0; t < q; t++) {
          if (va[i] + vb[j] + vc[k] == vx[t]) {
            vx[t] = 0;
          }
        }
      }
    }
  }
  for (int i = 0; i < q; i++) {
    if (vx[i] == 0) {

      cout << "Yes\n";
    } else {
      cout << "No\n";
    }
  }
  return 0;
}
