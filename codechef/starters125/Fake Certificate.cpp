// Problem: Fake Certificate
// Contest: START125D
// Judge: CodeChef
// URL: https://www.codechef.com/START125D/problems/FKMC
// Memory Limit: 256
// Time Limit: 1000
// Start: Wed Mar 13 20:30:57 2024

#include <bits/stdc++.h>
using namespace std;

int main() {

  int t;
  cin >> t;
  for (int q = 0; q < t; q++) {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int maxi{0};
    int ctr{0};
    int ctr2{0};
    for (int i = 0; i < n; i++) {
      if (s[i] == '0') {
        ctr++;
        maxi = max(maxi, ctr);
      } else {

        maxi = max(maxi, ctr);
        ctr = 0;
      }
    }
    for (int i = 0; i < n; i++) {
      if (s[i] == '1') {
        ctr2++;
      }
    }
    cout << maxi + ctr2 << endl;
  }

  return 0;
}
