// Problem: C - 343
// Contest: AtCoder Beginner Contest 343
// Judge: AtCoder
// URL: https://atcoder.jp/contests/abc343/tasks/abc343_c
// Memory Limit: 1024
// Time Limit: 2000
// Start: Sat Mar  2 18:11:21 2024

#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main() {

  long long n;
  cin >> n;
  vector<long long> v{};
  for (long double i = 0; i < n; ++i) {
    if ((i) / (cbrt(i) * cbrt(i) * cbrt(i)) == 1.0) {
      v.push_back(i);
    }
  }
  for (auto x : v) {
    cout << x << " ";
  }

  return 0;
}
