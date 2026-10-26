#include<bits/stdc++.h>
using namespace std;

void solve(string& s) {
  vector<int> numbers;
  for(char ch : s) {
    if(ch != '+') numbers.push_back(ch - '0');
  }

  sort(numbers.begin(), numbers.end());

  for(int i = 0; i < numbers.size(); i++) {
    cout << numbers[i];

    if(i < numbers.size() - 1) cout << "+";
  }
  cout << "\n";
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  string s;
  cin >> s;

  solve(s);
}