#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;

  while(t--) {
    long long n , k;
    cin >> n >> k;

    vector<long long> a;
    for(int i = 1; i <= n; i++) {
      long long x;
      cin >> x;
      a.push_back(x);
    }

    long long score = 0;

    while(k <= a.size()) {
      if(a[k-1] >= a[a.size() - k]) {
        score += a[k-1];
        a.erase(a.begin() + (k-1)); // T = O(n) 
      }

      else {
        score += a[a.size() - k];
        a.erase(a.begin() + (a.size() - k) );
      }
    }

    cout << score << endl;
  }
}