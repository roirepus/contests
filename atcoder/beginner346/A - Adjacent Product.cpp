#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  for (int i = 0; i < n - 1; i++) {
    cout << v[i] * v[i + 1] << " ";
  }
  return 0;
}
