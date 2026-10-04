#include <bits/stdc++.h>
using namespace std;

int main() {
  int y;
  cin >> y;
  // int ans = -1;
  
  // while(true) {
  //   y++;
    
  //   int temp = y;
  //   set<int> container;

  //   while(temp) {
  //     int digit = temp % 10;
  //     container.insert(digit);
  //     temp /= 10;
  //   }
    
  //   if(container.size() == 4) {
  //     ans = y;
  //     break;
  //   }
  // }

  // cout << ans << endl;

  while(true) {
    y++;

    string s = to_string(y);

    if(s[0] != s[1] && s[0] != s[2] && s[0] != s[3] &&
      s[1] != s[2] && s[1] != s[3] &&
      s[2] != s[3]
    ) {
      cout << y << endl;
      break;
    }
  }
}