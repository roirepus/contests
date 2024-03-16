// Problem: C. MEX Game 1
// Contest: Codeforces Round 934 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1944/problem/C
// Memory Limit: 256
// Time Limit: 2000
// Start: Sat Mar 16 20:16:34 2024

#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main() {

  int t;
  cin >> t;
  for (int q = 0; q < t; q++) {
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++) {

      int vs;
      cin >> vs;
      v.push_back(vs);
    }
    // sort(v.begin(), v.end());
    vector<int> temp;
    set<int> s;
    for (int i = 0; i < n; i++) {

      s.insert(v[i]);
    }
    if (s.size() == v.size()) {
      if (v[0] == 0) {
        cout << "1\n";
      } else {
        cout << "0\n";
      }

    } else {
      for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
          if (v[i] == v[j]) {
            temp.push_back(v[i]);
          }
        }
      }
      if (temp[0] != 0) {
        cout << "0\n";
      } else {
        for (int i = 0; i < temp.size(); i++) {
          if (temp[i] == i) {
            cout << temp[temp.size() - 1] + 1 << endl;
            break;
          } else {
            cout << temp[i - 1] + 1 << endl;
            break;
          }
        }
      }
    }
  }

  return 0;
}
