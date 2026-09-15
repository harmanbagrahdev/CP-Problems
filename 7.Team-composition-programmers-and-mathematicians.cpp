#include <bits/stdc++.h>
using namespace std;

// we cannot form teams more than (a+b) / 4, and we can't go to form more teams if there are no more programmers or no more mathematicians , so we have can only form teams according to this specific contraint !
long long teams(long long a, long long b) {
  return min({a,b, (a+b) /4});
}

// not logical !!!!!!

// int cnt = 0;

// if(a + b < 4) return 0;
// else if(a == b) {
//   return a / 2;
// }

// long long sum = a + b;

// int compare = 0;
// if(a < b) {
//   compare = a;
// }
// else compare = b;

// if(sum % 4 > compare) {
//   cnt += compare;
// }
// else cnt += sum % 4;

// return cnt;

int main() {
  int t;
  cin >> t;

  while(t--) {
    long long a, b;
    cin >> a >> b;

    cout << teams(a, b) << endl;
  }

}