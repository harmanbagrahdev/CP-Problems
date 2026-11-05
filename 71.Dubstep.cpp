#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  string s;
  cin >> s;

  string toRemove = "WUB";
  auto pos = s.find(toRemove);

  while (pos != string::npos) {
    s.replace(pos, toRemove.length(), " ");
    pos = s.find(toRemove, pos + 1);
  }

  stringstream ss(s);
  string word;
  bool first = true;

  while (ss >> word) {
    if (!first) {
        cout << " ";
    }
    cout << word;
    first = false;
  }
  cout << "\n";
}
