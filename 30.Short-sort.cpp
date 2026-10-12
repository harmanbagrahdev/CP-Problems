#include <bits/stdc++.h>
using namespace std;

void shortSort() {
  string s;
  cin >> s;

  if(s[0] == 'a' || s[1] == 'b' || s[2] == 'c') cout << "yes\n";
  else cout << "no\n";
}

int main() {
  int t;
  cin >> t;

  while(t--) {
    shortSort();
  }
}