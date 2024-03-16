// Problem: A. Special Characters
// Contest: Educational Codeforces Round 163 (Rated for Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1948/problem/A
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
    if (n % 2 == 0) {
      cout << "YES\n";
      for (int i = 0; i < n / 2; i++) {
        for (int j = 0; j < 2; j++) {
          cout << char(i + 65);
        }
      }
      cout << "\n";
    } else {
      cout << "NO\n";
    }
  }

  return 0;
}
