#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t; cin >> t;

  while(t--) {
    int n;
    string s;
    cin >> n >> s;

    int ans = (s[0] == 'B');
    
    for (int i = 0; i + 1 < n; i++) if (s[i] == s[i + 1]) ans++;

    cout << ans << "\n";
  }
}