// Problem: A. Median of an Array
// Contest: Codeforces Round 936 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1946/problem/A
// Memory Limit: 256
// Time Limit: 1000
// Start: Fri Mar 22 20:06:37 2024

#include <bits/stdc++.h>
using namespace std;
// int median(vector<long long> v, int n, long long med, int ctr) {
//   sort(v.begin(), v.end());
//
//   long long ctMedian{-1};
//   if (n % 2 == 0) {
//     ctMedian = v[(n / 2) - 1];
//   } else {
//     ctMedian = v[n / 2];
//   }
//   if (ctMedian != med) {
//     return ctr;
//   } else {
//
//     if (n % 2 == 0) {
//       v[n / 2 - 1]++;
//     } else {
//       v[n / 2]++;
//     }
//
//     ctr++;
//     median(v, n, med, ctr);
//   }
//   return ctr;
// }
//
// int main() {
//   int ctr{0};
//   int t;
//   cin >> t;
//   for (int q = 0; q < t; q++) {
//     int n;
//     cin >> n;
//     vector<long long> v(n);
//     for (int i = 0; i < n; i++) {
//       int va;
//       cin >> va;
//       v.push_back(va);
//     }
//     sort(v.begin(), v.end());
//
//     long long curMedian{-1};
//     if (n % 2 == 0) {
//       curMedian = v[n / 2 - 1];
//     } else {
//       curMedian = v[n / 2];
//     }
//     cout << median(v, n, curMedian, ctr) << '\n';
//   }
//   return 0;
//}
int median(vector<long long> v, int n, long long med, int ctr) {
  sort(v.begin(), v.end());
  long long newMed{-1};
  if (n % 2 == 0) {
    newMed = v[n / 2 - 1];
  } else {
    newMed = v[n / 2];
  }
  if (newMed != med) {
    return 0;
  } else {
    if (n % 2 == 0) {
      v[n / 2 - 1]++;
    } else {
      v[n / 2]++;
    }
    ctr++;
    median(v, n, med, ctr);
    return 0;
  }

  return 0;
}
int main() {
  int t;
  cin >> t;
  for (int q = 0; q < t; q++) {
    int n;
    cin >> n;
    vector<long long> v;
    for (int i = 0; i < n; i++) {
      cin >> v[i];
    }
    sort(v.begin(), v.end());
    long long inMed{-1};
    if (n % 2 == 0) {
      inMed = v[n / 2 - 1];
    } else {
      inMed = v[n / 2];
    }
    int ctr{0};
    median(v, n, inMed, ctr);
    cout << ctr << '\n';
  }
}
