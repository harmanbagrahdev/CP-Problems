#include <bits/stdc++.h>
using namespace std;

// We put cnt copies of s after median!

// ___nums[i] <= median____ median ____nums[i] >= median____

// ___(we just put these elements zero so they are <= median)____ median ____copies of median____
// cnt * median <= sum

int main() {
  int t;
  cin >> t;

  while(t--) {
    long long n, s;
    cin >> n >> s; 

    long long cnt = n / 2 + 1; // number of elements after median (including median)
    long long ans = s / cnt;
    cout << ans << endl;
  }
}