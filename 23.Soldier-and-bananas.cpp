#include <bits/stdc++.h>
using namespace std;

int main() {
  int k, w;
  long long n;
  cin >> k >> w >> n;

  long long totalDollars = 0;
  for(int i = 1; i <= n; i++) {
    totalDollars += i * k;
  }

  long long dollarsNeeded = totalDollars - w;
  
  if(dollarsNeeded > 0) cout << dollarsNeeded << endl;
  else cout << 0 << endl;
}