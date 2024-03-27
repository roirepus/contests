// Problem: Anti-Triangle
// Contest: START127D
// Judge: CodeChef
// URL: https://www.codechef.com/START127D/problems/ANTITRI
// Memory Limit: 256
// Time Limit: 1000
// Start: Wed Mar 27 20:00:59 2024

#include <bits/stdc++.h>
using namespace std;

int main() {

  int t;
  cin >> t;
  for (int q = 0; q < t; q++) {
    int n;
    cin >> n;
    unsigned int l;
    cin >> l;
    vector<unsigned int> v(n);

    int ctr{0};
    unsigned int x = l;
    while (x > 1) {
      x = x / 2;
      ctr++;
    }
    if (v[0] = l / 2 * ctr != 0) {
      v[0] = l / 2 * ctr;
    } else {
      v[0] = l + 1;
    }
    for (int i = 1; i < n; i++) {
      v[i] = (l * 2 * i) + i + 1;
    }
    for (auto x : v) {
      cout << x << " ";
    }
    cout << '\n';
  }

  return 0;
}
