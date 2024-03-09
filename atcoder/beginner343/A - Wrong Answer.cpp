// Problem: A - Wrong Answer
// Contest: AtCoder Beginner Contest 343
// Judge: AtCoder
// URL: https://atcoder.jp/contests/abc343/tasks/abc343_a
// Memory Limit: 1024
// Time Limit: 2000
// Start: Sat Mar  2 18:11:21 2024

#include <bits/stdc++.h>
using namespace std;

int main() {

  int a, b;
  cin >> a >> b;
  int c = a + b;
  if (c == 0) {

    cout << c + 1;
  } else if (c == 9) {
    cout << c - 1;
  } else {
    cout << c + 1;
  }

  return 0;
}
