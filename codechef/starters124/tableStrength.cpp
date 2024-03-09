// Problem: Table Strength
// Contest: START124D
// Judge: CodeChef
// URL: https://www.codechef.com/START124D/problems/STRONGTABLE
// Memory Limit: 256
// Time Limit: 1000
// Start: Wed Mar  6 20:28:58 2024

#include <bits/stdc++.h>
using namespace std;

int main() {

  int t;
  cin >> t;
  for (int q = 0; q < t; ++q) {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }
    int max{0};
    sort(arr, arr + n);
    vector<int> temp{};
    for (int i = n - 1; i >= 0; i--) {
      temp.push_back(arr[i]);
      sort(temp.begin(), temp.end());
      int t = (temp[0] * temp.size());
      if (t > max) {
        max = t;
      } else if (t < max) {
        break;
      }
    }

    cout << max << endl;
  }
  return 0;
}
