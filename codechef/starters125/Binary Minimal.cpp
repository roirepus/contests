// Problem: Binary Minimal
// Contest: START125D
// Judge: CodeChef
// URL: https://www.codechef.com/START125D/problems/BILM
// Memory Limit: 256
// Time Limit: 1000
// Start: Wed Mar 13 20:30:57 2024

#include <bits/stdc++.h>
using namespace std;

int main() {

  int t;
  cin >> t;
  for (int q = 0; q < t; q++) {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    // while(k--){
    //
    // }
    if (k) {
      string temp1 = "";
      for (int i = 0; i < n - k; i++) {
        temp1 += s[i];
      }
      string temp2 = "";
      int p = -1;
      for (int i = 0; i < n; i++) {
        if (s[i] != '0') {
          p = i;
          break;
        }
        if (p > 0) {
          for (int i = p; i < p + k; i++) {
            s[i] = '0';
          }
        }
      }

      temp2 = s;
      int ctr{0};
      for (int i = 0; i < n; i++) {
        if (s[i] == '0') {
          ctr++;
        }
      }
      if (ctr == s.size()) {
        cout << temp1 << '\n';

      } else {
        cout << temp2 << '\n';
      }
    } else {
      cout << s << '\n';
    }
  }
  return 0;
}
