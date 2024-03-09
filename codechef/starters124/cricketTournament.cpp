// Problem: Cricket Tournament
// Contest: START124D
// Judge: CodeChef
// URL: https://www.codechef.com/START124D/problems/CRICKETUDYAM
// Memory Limit: 256
// Time Limit: 1000
// Start: Wed Mar  6 20:18:46 2024

#include <bits/stdc++.h>
using namespace std;

int main() {

  int t;
  cin >> t;
  for (int i = 0; i < t; i++) {
    int n, m;
    cin >> n >> m;
    if (n > m) {
      cout << "YES\n";
    } else {
      cout << "NO\n";
    }
  }
  return 0;
}
