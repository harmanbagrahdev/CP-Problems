#include <iostream>
using namespace std;

// n = 2^a + 3^b
void solve() {
  long long n;
  cin >> n;
  
  int cnt2 = 0, cnt3 = 0;
  
  while (n % 2 == 0) {
    cnt2++;
    n /= 2;
  }

  while (n % 3 == 0) {
    cnt3++;
    n /= 3;
  }
  
  if (n != 1 || cnt2 > cnt3) {
    cout << -1 << "\n";
  }
  
  else {
    cout << (cnt3 - cnt2) + cnt3 << "\n";
  }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;

    while (t--) {
      solve();
    }
}
