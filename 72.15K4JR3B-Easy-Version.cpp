#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t; cin >> t;

  while(t--) {
    int n;
    cin >> n;

    // Linear programming chapter maths
    // b + c = n
    long long x = n / 2;
    long long y = n - x;
    long long doubledArea = x * y;

    cout << doubledArea << endl;
  }
}