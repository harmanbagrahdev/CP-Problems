#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;

  while(t--) {
    int n;
    cin >> n;
    int evenSum = 0, oddSum = 0;

    for(int i = 0; i < n; i++) {
      int x;
      cin >> x;
      if(x % 2) oddSum++;
      else evenSum++;
    }

    bool larpity = (oddSum % 2 == 1) && ((oddSum == 1 && evenSum == 1) || (oddSum == 3 && evenSum == 0));

    cout << (larpity ? "Larpity" : "Moggity") << "\n";
  }
}