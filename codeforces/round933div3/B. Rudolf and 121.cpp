// Problem: B. Rudolf and 121
// Contest: Codeforces Round 933 (Div. 3)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1941/problem/B
// Memory Limit: 256
// Time Limit: 2000
// Start: Mon Mar 11 20:06:30 2024

#include <bits/stdc++.h>
using namespace std;

int main() {

  int t;
  cin >> t;
  for (int q = 0; q < t; q++) {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }
    for (int i = 1; i < n - 1; i++) {
      while (arr[i] > 1 && arr[i - 1] > 0 && arr[i + 1] > 0) {

        arr[i] -= 2;
        arr[i - 1] -= 1;
        arr[i + 1] -= 1;
      }
    }
    int ctr{0};
    for (int i = 0; i < n; i++) {
      if (arr[i] == 0) {
        ctr++;
      }
    }
    if (ctr == n) {
      cout << "yes\n";
    } else {
      cout << "no\n";
    }
  }

  return 0;
}
