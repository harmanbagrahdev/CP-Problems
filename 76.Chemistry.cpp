#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, k;
  cin >> n >> k;
  string s;
  cin >> s;
  
  vector<int> freq(26, 0);
  for (char c : s) {
    freq[c - 'a']++;
  }
  
  int odd_count = 0;
  for (int i = 0; i < 26; i++) {
    if (freq[i] % 2 != 0) {
      odd_count++;
    }
  }

  if (k >= odd_count - 1) {
    cout << "YES\n";
  } else {
    cout << "NO\n";
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