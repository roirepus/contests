// Problem: Sale
// Contest: START126D
// Judge: CodeChef
// URL: https://www.codechef.com/START126D/problems/FINALSALE
// Memory Limit: 256
// Time Limit: 1000
// Start: Wed Mar 20 20:00:41 2024

#include <bits/stdc++.h>
using namespace std;

int main() {

  int t;
  cin >> t;
  for (int q = 0; q < t; q++) {
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++) {
      cin >> v[i];
    }

    if (n == 1) {
      cout << 2 * v[0] << '\n';
    } else {
      long long maxi = 2 * v[0];
      long long sum = 2 * v[0];
      for (int i = 1; i < n; i++) {

        sum += (2 * v[i]);
        sum = sum - v[i - 1];

        maxi = max(maxi, sum);
      }
      cout << maxi << '\n';
    }
  }

  return 0;
}
