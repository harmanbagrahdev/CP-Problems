#include<bits/stdc++.h>
using namespace std;

string solve(int n) {
  vector<int> a(n);
  for(int i = 0; i < n; i++) {
    cin >> a[i];

    if(a[i] == 1) return "Hard";
  }

  return "Easy";
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;
  
  cout << solve(n) << "\n";

}