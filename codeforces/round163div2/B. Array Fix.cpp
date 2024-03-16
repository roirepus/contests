// Problem: B. Array Fix
// Contest: Educational Codeforces Round 163 (Rated for Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1948/problem/B
// Memory Limit: 256
// Time Limit: 2000
// Start: Fri Mar 15 20:07:24 2024

#include <bits/stdc++.h>
using namespace std;

int main() {

  int t;
  cin >> t;
  for (int q = 0; q < t; q++) {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
      cin >> v[i];
    }
    for (int i = 1; i < n; i++) {
      if (v[i] > v[i - 1]) {
        cout << "YES\n";
        break;
      }
    }
    // int i = 0;
    // while (v[i] > v[i + 1] && v[i] >= 11) {
    //   for (int x = v.size(); x > i + 1; x--) {
    //     v[x] = v[x - 1];
    //   }
    //   int temp = v[i];
    //   v[i + 1] = v[i] % 10;
    //   v[i] = (temp - (temp % 10)) % 10;

    //  i++;
    //}
    for (int i = 0; i < n; i++) {
      if (v[i] > v[i + 1] && v[i] > 10) {
        for (int x = v.size(); x > i + 1; x--) {
          v[x] = v[x - 1];
        }
        int temp = v[i];
        v[i + 1] = v[i] % 10;
        v[i] = (temp - (temp % 10)) % 10;
      }
    }
    int ctr{0};
    for (int p = 0; p < v.size() - 1; p++) {
      if (v[p] <= v[p + 1]) {
        ctr++;
      }
    }
    if (ctr == v.size() - 1) {
      cout << "YES\n";
      break;
    } else {
      cout << "NO\n";
      break;
    }
  }

  return 0;
}
