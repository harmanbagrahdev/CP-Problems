#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;

  while(t--) {
    int n;
    cin >> n;
    char ch;
    cin >> ch;
    char s[n];
    for(int i = 0; i < n; i++) cin >> s[i];

    int i = 0;
    int j = n-1;
    int coins = 0;

    while(i < j) {
      if(s[i] != s[j]) {
        if(s[i] != ch && s[j] != ch) {
          s[i] = ch;
          s[j] = ch;
          coins += 2;
        }
        else if(s[i] != ch) {
          s[i] = ch;
          coins++;
        }
        else if(s[j] != ch) {
          s[j] = ch;
          coins++;
        }
      }

      i++;
      j--;
    }

    cout << coins << endl;
  }
}