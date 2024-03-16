// Problem: A. Destroying Bridges
// Contest: Codeforces Round 934 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1944/problem/A
// Memory Limit: 256
// Time Limit: 1000
// Start: Sat Mar 16 20:16:33 2024

#include <bits/stdc++.h>
using namespace std;

int main() {

  int t;
  cin >> t;
  for (int q = 0; q < t; q++) {

    int n, k;
    cin >> n >> k;
    int total = n * (n - 2) / 2;
    if (k >= n - 1) {
      cout << "1\n";
    } else {
      cout << n << '\n';
    }
  }

  return 0;
}
