#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;

  // For n <= 3, 1 * p[1] can only be 1, 2, or 3 (none are composite)
  if (n <= 3) {
    cout << -1 << "\n";
    return;
  }

  vector<int> p(n + 1);
  for (int i = 1; i <= n; i++) {
    p[i] = i;
  }

  // Swap p[1] and p[4] so 1*p[1] = 4 and 4*p[4] = 4 (both composite)
  swap(p[1], p[4]);

  for (int i = 1; i <= n; i++) {
    cout << p[i] << (i == n ? "" : " ");
  }
  cout << "\n";
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
