// Problem: Bucket Game
// Contest: START125D
// Judge: CodeChef
// URL: https://www.codechef.com/START125D/problems/BGME
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
    int arr[n];
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }
    int alice{0};
    int bob{0};
    for (int i = 0; i < n; i += 2) {
      if (arr[i] == 1) {
        arr[i] = 0;
        alice++;
      } else {
        arr[i]--;
      }
    }
    for (int i = 1; i < n; i += 2) {
      if (arr[i] == 1) {
        arr[i] = 0;
        bob++;
      } else {
        arr[i]--;
      }
    }
    if (alice > bob) {
      cout << "Alice\n";

    } else {
      cout << "Bob\n";
    }
  }

  return 0;
}
