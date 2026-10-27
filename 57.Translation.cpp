#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  string s, t;
  cin >> s >> t;

  reverse(s.begin(), s.end());

  if(s == t) cout << "YES\n";
  else cout << "NO\n";
}