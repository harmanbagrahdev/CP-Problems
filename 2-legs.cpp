#include <bits/stdc++.h>
using namespace std;

int cntLegs(int n) {
  int cnt = 0;

  while(n) {
    if(n >= 4) {
      cnt++;
      n -= 4;
    }
    else {
      cnt++;
      n -= 2;
    }
  }

  return cnt;
}

int main() {
  int t;
  cin >> t;

  while(t--) {
    int n;
    cin >> n;
    cout << cntLegs(n) << endl;
  }

}