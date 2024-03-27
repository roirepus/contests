// Problem: Superincreasing
// Contest: START127D
// Judge: CodeChef
// URL: https://www.codechef.com/START127D/problems/SUPINC
// Memory Limit: 256
// Time Limit: 1000
// Start: Wed Mar 27 20:00:59 2024

#include <bits/stdc++.h>
using namespace std;

int main() {

  int t;
  cin >> t;
  for (int q{0}; q < t; q++) {
    int n, k;
    cin >> n >> k;
    long long x;
    cin >> x;
    if (x >= pow(2, k - 1)) {
      cout << "yes\n";
    } else {
      cout << "no\n";
    }
  }

  return 0;
}
