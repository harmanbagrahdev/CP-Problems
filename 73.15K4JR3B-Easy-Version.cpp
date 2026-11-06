#include <bits/stdc++.h>
using namespace std;

void print128(__int128 n) {
  if (n == 0) {
    cout << 0 << "\n";
    return;
  }

  string s = "";
  while (n > 0) {
    s += (char)('0' + (n % 10));
    n /= 10;
  }
  reverse(s.begin(), s.end());
  cout << s << "\n";
}

// NEW THING!!!!!
// long long was overflowing that's why __int128
void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }

    sort(a.rbegin(), a.rend());

    __int128 s1 = 0;
    __int128 s2 = 0;

    for (int i = 0; i < n; i++) {
      __int128 jump_value = (__int128)1 << a[i];

      if (s1 <= s2) {
          s1 += jump_value;
      } else {
          s2 += jump_value;
        }
    }

    __int128 max_doubled_area = s1 * s2;
    print128(max_doubled_area);
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int t;
  if (cin >> t) {
    while (t--) {
      solve();
    }
  }
}