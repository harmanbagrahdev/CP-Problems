#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  string s; cin >> s;
  string ans = "";

  for(char c : s) {
    c = tolower(c);

    if(c == 'a' || c == 'i' || c == 'e' || c == 'o' || c == 'u' || c == 'y') continue;

    ans += ".";
    ans += c;

  }

  cout << ans << "\n";
}