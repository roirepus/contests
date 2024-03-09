// Problem: Binary Parity
// Contest: START124D
// Judge: CodeChef
// URL: https://www.codechef.com/START124D/problems/BINPARITY
// Memory Limit: 256
// Time Limit: 1000
// Start: Wed Mar  6 20:45:59 2024

#include <bits/stdc++.h>
#include <csignal>
#include <iostream>
using namespace std;

bool getparity(long long n) { return __builtin_parity(n); }
int main() {

  int t;
  cin >> t;
  for (int i = 0; i < t; ++i) {
    long long n;
    cout << (getparity(n) ? "ODD\n" : "EVEN\n");
    getchar();
  }
  return 0;
}
