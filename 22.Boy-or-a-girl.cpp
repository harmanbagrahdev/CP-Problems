#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  set<char> uniqueChars;

  for(char c : s) {
    uniqueChars.insert(c);
  }

  if(uniqueChars.size() % 2 == 0) cout << "CHAT WITH HER!\n";
  else cout << "IGNORE HIM!\n";
}