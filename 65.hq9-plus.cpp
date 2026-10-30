#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  string p;
  cin >> p;

  bool output = false;

  for(char ch : p) {
    if(ch == 'H' || ch == 'Q' || ch == '9') { // + just increments value and does not give any output
      output = true;
      break;
    }
  }

  if(output) cout << "YES\n";
  else cout << "NO\n";
}