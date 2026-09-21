#include <bits/stdc++.h>
using namespace std;

// its not monotonic so binary search can't be applied!

// long long search(long long a, long long b, long long n) {
//   int low = 0, high = n;
//   long long maxScore = abs(a - b);
//   // if(( (a + 1) - b) < maxScore) return maxScore;

//   while(low <= high) {
//     long long mid = low + (high - low) / 2;
    
//     if( abs( (a + mid) - b) > maxScore) {
//       maxScore = abs(a + mid - b);
//       low = mid+1;
//     }
//     else high = mid-1;
//   }

//   return maxScore;
// }

int main() {
  int t;
  cin >> t;

  while(t--) {
    long long a, b, c;
    cin >> a >> b >> c;

    cout << max(llabs(a-b), llabs(a + c - b)) << endl;
  }
}