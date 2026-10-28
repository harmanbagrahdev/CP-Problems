#include <bits/stdc++.h>
using namespace std;

// break the problem to 1-D and then we get this intuition!
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  long long m, n, a;
  cin >> m >> n >> a;

  long long mStones = 0;
  long long mCovered = 0;
  while (mCovered < m) {
    mStones++;
    mCovered += a;
  }

  long long nStones = 0;
  long long covered_n = 0;
  while (covered_n < n) {
    nStones++;
    covered_n += a;
  }

  long long totalStones = mStones * nStones;
  
  cout << totalStones << "\n";
}