#include <bits/stdc++.h>
using namespace std;

// l, (l+1), (l+1+2), (l+1+2+3), ... (l + 1+2+3+...+(k-1)) = l + (k(k-1) / 2)
int lenArr(long long l, long long r) {
  long long low = 1;
  long long high = 100000;
  long long ans = 1;

  while(low <= high) {
    long long mid = low + (high - low) / 2;

    if(l + mid * (mid-1) / 2 <= r) {
      ans = mid;
      low = mid+1;
    }
    else high = mid-1;
  }

  return ans;
}

int main() {
  int t;
  cin >> t;

  while(t--) {
    long long l, r;
    cin >> l >> r;

    cout << lenArr(l, r) << endl;
  }

}