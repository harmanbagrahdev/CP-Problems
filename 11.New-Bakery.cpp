#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  
  while(t--) {
    long long n, a, b;
    cin >> n >> a >> b;

    long long k = max(0LL, min(n, b-a));
    long long ans = k*b - k*(k-1) / 2 + (n-k)*a;
    cout << ans << endl;
  }
}