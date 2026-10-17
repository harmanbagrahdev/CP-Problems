#include <bits/stdc++.h>
using namespace std;

int solve(vector<int>& a, int n) {
  int cntTwo = 0;
  int ans = -1;

  for(int i = 0; i < n; i++) {
    cin >> a[i];
    if(a[i] == 2) cntTwo++;
  }

  if(cntTwo == 0) {
    return 1;
  }
  if(cntTwo % 2 != 0) return ans;
  
  int currentTwo = 0;
  for(int i = 0; i < n; i++) {
    if(a[i] == 2) currentTwo++;
    if(currentTwo == cntTwo / 2) {
      ans = i + 1;
      break;
    }
  }

  return ans;
}

int main() {
  // Fast I/O
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;

  while(t--) {
    int n;
    cin >> n;
    vector<int> a(n);

    cout << solve(a, n) << "\n";
  }
}