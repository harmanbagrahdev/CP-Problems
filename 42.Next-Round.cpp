#include<bits/stdc++.h>
using namespace std;

int solve(vector<int>& a, int n, int k) {
  int cnt = 0;
  for(int i = 0; i < n; i++) {
    if(a[i] >= a[k-1] && a[i] > 0) cnt++;
  }

  return cnt;
}
 
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, k;
  cin >> n >> k;

  vector<int> a(n);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }

  cout << solve(a, n, k) << endl;
}