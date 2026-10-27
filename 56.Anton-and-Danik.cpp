#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;

  string s;
  cin >> s;

  int anton = 0, danik = 0;

  for(char ch : s) {
    if(ch == 'A') anton++;
    else danik++;
  }

  if(anton > danik) cout << "Anton\n";
  else if(danik > anton) cout << "Danik\n";
  else cout << "Friendship\n";
}