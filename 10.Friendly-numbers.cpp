#include <bits/stdc++.h>
using namespace std;

int digitSum(long long y) {
  int sum = 0;

  while(y) {
    sum += y % 10;
    y /= 10;
  }

  return sum;
}

int main() {
  int t;
  cin >> t;
  
  while(t--) {
    long long x;
    cin >> x;

    int cnt = 0;
    for(long long y = x; y <= x + 90; y++) { // biggest possible number is 9 * each digit
      if(y - digitSum(y) == x) cnt++;
    }

    cout << cnt << endl;
  }
}