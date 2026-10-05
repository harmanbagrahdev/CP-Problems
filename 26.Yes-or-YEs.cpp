#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;

  while(t--) {
    string s;
    cin >> s;

    transform(s.begin(), s.end(), s.begin(), [](unsigned char c) {
      return tolower(c);
    } );

    if(s == "yes") cout << "YES\n";
    else cout << "NO\n";
    
  }
}