#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;
  long long k;
  cin >> k;
  vector<long long> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  long long sum{0};

  for (long long i = 1; i <= k; i++) {
    for (int j = 0; j < n; j++) {
      if (i == v[j]) {
        break;
      } else {
        sum += i;
      }
    }
  }
  cout << sum << '\n';

  return 0;
}
