#include <bits/stdc++.h>
using namespace std;

int prefixLen(string& s, string& t) {
  int i = 0, j = 0;
  int n = s.length(), m = t.length();
  int cnt = 0;

  while(i < n && j < m) {
    if(s[i] == t[i]) {
      cnt++;
      i++;
      j++;
    }

    else if(s[i] != t[i]) {
      // return cnt;
      break;
    }
  }

  return cnt;
}

int cntSeconds(int pl, string s, string t) {
  int cost_with_copy = pl + 1 + (s.length() - pl) + (t.length() - pl);
  int cost_no_copy = s.length() + t.length();
  
  int answer = min(cost_with_copy, cost_no_copy);

  return answer;
}

int main() {
  int q;
  cin >> q;

  while(q--) {
    string s, t;
    cin >> s;
    cin >> t;

    int prefixLength = prefixLen(s, t);
    cout << cntSeconds(prefixLength, s, t) << endl;
  }

}