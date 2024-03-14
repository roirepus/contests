// Problem: 50-50 Rule
// Contest: START125D
// Judge: CodeChef
// URL: https://www.codechef.com/START125D/problems/NGRS
// Memory Limit: 256
// Time Limit: 1000
// Start: Wed Mar 13 20:30:57 2024

#include <bits/stdc++.h>
using namespace std;

int main() {

  int t;
  cin >> t;
  for (int q = 0; q < t; q++) {
    int x, y;
    cin >> x >> y;
    if (x < 50) {
      cout << "Z\n";
    } else {
      if (y < 50) {
        cout << "F\n";
      } else {
        cout << "A\n";
      }
    }
  }

  return 0;
}
