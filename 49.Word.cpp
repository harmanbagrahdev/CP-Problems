#include<bits/stdc++.h>
using namespace std;

// T = O(2*n)
string solve(string& s) {
  int upperCnt = 0, lowerCnt = 0;
  
  for(char& ch : s) {
    if(isupper(ch)) upperCnt++;
    else lowerCnt++;
  }

  if(upperCnt > s.size() / 2) {
    for(char& ch : s) {
      ch = toupper(ch);
    }
    return s;
  }

  for(char& ch : s) {
    ch = tolower(ch);
  }

  return s;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  string s;
  cin >> s;

  cout << solve(s) << "\n";
}