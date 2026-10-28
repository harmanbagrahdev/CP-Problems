#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  
  if (s.find("0000000") != string::npos || s.find("1111111") != string::npos) {
    cout << "YES\n";
  }
  else {
    cout << "NO\n";
  }
}


// int main() {
//   ios_base::sync_with_stdio(false);
//   cin.tie(NULL);

//   string s; 
//   cin >> s;

//   int current_streak = 1;
//   bool dangerous = false;

//   for (size_t i = 1; i < s.size(); i++) {
//     if (s[i] == s[i - 1]) {
//       current_streak++;
//     }
//     else {
//       current_streak = 1;
//     }

//     if (current_streak >= 7) {
//       dangerous = true;
//       break;
//     }
//   }

//   if (dangerous) {
//     cout << "YES\n";
//   }
//   else {
//     cout << "NO\n";
//   }
// }