// Problem: A - Neq Number
// Contest: AtCoder Regular Contest 173
// Judge: AtCoder
// URL: https://atcoder.jp/contests/arc173/tasks/arc173_a
// Memory Limit: 1024
// Time Limit: 2000
// Start: Sun Mar 10 17:54:25 2024

#include <bits/stdc++.h>
#include <climits>
using namespace std;

int main() {

  // int t;
  // cin >> t;
  // for (int i = 0; i < t; t++) {
  //   unsigned int k;
  //   cin >> k;
  //   for (int i = 0; i < 1000; i++) {
  //     int ctr{0};
  //     stringstream stream;
  //     stream << i;
  //     string iAsString;
  //     stream >> iAsString;
  //     for (int j = 1; j < iAsString.length() - 1; j++) {
  //       if (ctr == k) {
  //         cout << i << endl;
  //         break;
  //       } else if (iAsString[j - 1] != iAsString[j] &&
  //                  iAsString[j] != iAsString[j + 1]) {
  //         ctr++;
  //       }
  //     }
  //   }
  // }
  int t;
  cin >> t;
  vector<long long int> arr(t);
  for (int i = 0; i < t; i++) {
    cin >> arr[i];
  }
  for (int i = 0; i < t; i++) {
    long long int k = arr[i];
    for (int i = 0; i < 1000; i++) {
      int ctr{0};
      stringstream stream;
      stream << i;
      string iAsString;
      stream >> iAsString;
      for (int j = 1; j < iAsString.length() - 2; j++) {
        int l{0};
        if (iAsString[j] != iAsString[j - 1] &&
            iAsString[j] != iAsString[j + 1]) {

          l++;
          if (l * 2 == i) {
            ctr++;
          }
        }
      }
    }
  }
  return 0;
}
