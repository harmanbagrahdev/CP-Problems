#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  long long n, k;
  cin >> n >> k;
  
  long long numOdds = (n + 1) / 2;

  if(k <= numOdds) cout << 2 * k - 1 << "\n";
  else cout << 2 * (k - numOdds) << "\n";
}