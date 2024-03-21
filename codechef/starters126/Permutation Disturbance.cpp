// Problem: Permutation Disturbance
// Contest: START126D
// Judge: CodeChef
// URL: https://www.codechef.com/START126D/problems/PERDIS
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
    int ctr{0};
    for (int i = 0; i < n - 1; i++) {
      if (v[i] == i + 1) {
        swap(v[i], v[i + 1]);
        ctr++;
      }
    }
    cout << ctr;
  }
  return 0;
}
