// Problem: A. Rudolf and the Ticket
// Contest: Codeforces Round 933 (Div. 3)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1941/problem/A
// Memory Limit: 256
// Time Limit: 1000
// Start: Mon Mar 11 20:06:29 2024

#include <bits/stdc++.h>
using namespace std;

int main() {

  int t;
  cin >> t;
  for (int q = 0; q < t; q++) {
    int n, m, k;
    cin >> n >> m >> k;
    int b[n];
    int c[m];
    for (int i = 0; i < n; i++) {
      cin >> b[i];
    }
    for (int i = 0; i < m; i++) {
      cin >> c[i];
    }
    int ctr{0};
    if (n >= m) {
      for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
          if (b[i] + c[j] <= k) {
            ctr++;
          }
        }
      }

    } else {
      for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
          if (b[j] + c[i] <= k) {
            ctr++;
          }
        }
      }
    }
    cout << ctr << '\n';
  }
  return 0;
}
