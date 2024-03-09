// Problem: B - Delimiter
// Contest: 	Toyota Programming Contest 2024#3（AtCoder Beginner Contest
// 344） Judge: AtCoder URL: https://atcoder.jp/contests/abc344/tasks/abc344_b
// Memory Limit: 1024
// Time Limit: 2000
// Start: Sat Mar  9 17:56:07 2024

#include <bits/stdc++.h>
using namespace std;

int main() {

  vector<int> v;
  int a;
  while (cin >> a) {
    v.push_back(a);
  }
  for (int i = v.size() - 1; i >= 0; i--) {
    cout << v[i] << '\n';
  }
  return 0;
}
