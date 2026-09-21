#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;

  while(t--) {
    int n;
    long long h;
    cin >> n >> h;

    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());
    int cnt = 0;

    while(h) {
      for(int i : a) {
        if(h > i) h -= i;
      }
    }

    cout << cnt << endl;
  }
}