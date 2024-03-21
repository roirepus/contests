// Problem: Dice Game 3
// Contest: START126D
// Judge: CodeChef
// URL: https://www.codechef.com/START126D/problems/DICEGAME3
// Memory Limit: 256
// Time Limit: 1000
// Start: Wed Mar 20 20:00:40 2024

#include <bits/stdc++.h>
using namespace std;

int main() {

  int t;
  cin >> t;
  for (int q = 0; q < t; q++) {
    int n;
    cin >> n;
    if (n == 1) {
      cout << 6 << "\n";
    } else {
      if (n % 2 == 0) {
        cout << ((n / 2) * 1) + ((n / 2) * 12) << '\n';
      } else if (n % 2 == 1) {

        cout << (((n - 1) / 2) * 1) + (((n - 1) / 2) * 12) + 6 << '\n';
      }
    }
  }

  return 0;
}
