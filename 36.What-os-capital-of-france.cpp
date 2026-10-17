#include <bits/stdc++.h>
using namespace std;

int main() {
  // Fast I/O
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;

  while(t--) {
    long long n;
    cin >> n;

    long long mini = LLONG_MAX, maxi = 0;
    for(int i = 0; i < n; i++) {
      long long x;
      cin >> x;
      mini = min(mini, x);
      maxi = max(maxi, x);
    }

    long long ans = 0;
    while(maxi > 0) {
      long long p = 1LL << (63 - __builtin_clzll(maxi)); // we have top bit of max
      if(mini < p) { // to lift elements to p-1
        ans += 2*p - 1; // all bits set till here
        break;
      }

      ans += p; // both have same bit so bank it!
      mini -= p; // strip
      maxi -= p;
    }

    cout << ans << "\n";
  }
}