// Problem: A - Spoiler
// Contest: 	Toyota Programming Contest 2024#3（AtCoder Beginner Contest
// 344） Judge: AtCoder URL: https://atcoder.jp/contests/abc344/tasks/abc344_a
// Memory Limit: 1024
// Time Limit: 2000
// Start: Sat Mar  9 17:56:07 2024

#include <bits/stdc++.h>
using namespace std;

int main() {

  string s;
  int toerase1{0};
  int toerase2{0};
  cin >> s;
  for (int i = 0; i < s.length(); i++) {
    if (s[i] == '|') {
      toerase1 = i;
      break;
    }
  }
  for (int i = 0; i < s.length(); i++) {
    if (s[i] == '|' && i != toerase1) {
      toerase2 = i;
    }
  }
  s.erase(toerase1, toerase2 - toerase1 + 1);
  // string temp = "";
  // for (int i = 0; i < s.length(); i++) {
  //   if (i >= toerase1 && i <= toerase2) {
  //     temp += s[i];
  //   }
  // }

  cout << s;
  return 0;
}
