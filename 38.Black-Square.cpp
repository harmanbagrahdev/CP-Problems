#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  vector<int> a(4);
  for(int i = 0; i < 4; i++) {
    cin >> a[i];
  }

  string s = "";
  cin >> s;

  int totalCal = 0;

  for(char ch : s) {
    totalCal += a[ch - '0' - 1];
  }

  std::cout << totalCal << "\n"; // ambigous error without using std::cout i don't know why!
}