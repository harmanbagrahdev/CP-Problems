#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, k;
  cin >> n >> k;
  
  int a_even = 0, a_odd = 0;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    if (x % 2 == 0) a_even++;
    else a_odd++;
  }
  
  int b_even = 0, b_odd = 0;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    if (x % 2 == 0) b_even++;
    else b_odd++;
  }
    
  if (k % 2 == 0) {
    if (a_odd >= b_odd) {
      cout << "YES\n";
    }
    else {
      cout << "NO\n";
    }
  }
  
  else {
    if (a_even >= b_even) {
      cout << "YES\n";
    }
    else {
      cout << "NO\n";
    }
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int t;
  cin >> t;

  while (t--) {
    solve();
  }
}