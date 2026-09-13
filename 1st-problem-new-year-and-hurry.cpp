#include <bits/stdc++.h>
using namespace std;

int cntProblems(int n, int k) {
  int t = 0;
  int cnt = 0;

  for(int i = 1; i <= n; i++) {
    t += 5 * i;

    if(t + k <= 240) {
      cnt++;
    }
    else break;
  }

  return cnt;
}

int main() {
  int n, k;
  cin >> n >> k;

  cout << cntProblems(n, k) << endl;
}