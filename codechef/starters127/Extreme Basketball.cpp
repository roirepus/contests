// Problem: Extreme Basketball
// Contest: START127D
// Judge: CodeChef
// URL: https://www.codechef.com/START127D/problems/BBWIN
// Memory Limit: 256
// Time Limit: 1000
// Start: Wed Mar 27 20:00:59 2024

#include <bits/stdc++.h>
using namespace std;

int main() {

  int t;
  cin >> t;
  for (int q = 0; q < t; q++) {
    int a, b;
    cin >> a >> b;

    int diff = (a - b);
    int req{0};
    int shots{0};
    if (a - b < 0) {
      req = 10 + abs(a - b);
    } else {
      req = 10 - (a - b);
    }
    // if (a - b >= 10) {
    //   cout << "0\n";
    if (req >= 3) {
      shots = req / 3;
      req = req % 3;
    }
    if (req > 0 && req < 3) {
      shots += 1;
    }
    cout << shots << '\n';
  }

  return 0;
}
