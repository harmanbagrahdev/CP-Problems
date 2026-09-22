#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;

  while(t--) {
    long long int n;
    cin >> n;
    vector<pair<long long int, long long int>> ms(n);
    for(int i = 0; i < n; i++) {
      int x, y;
      cin >> ms[i].first >> ms[i].second;
    }
    
    vector<long long int> arr;
    for(auto i : ms) {
      if(i.second > 1) arr.push_back(i.first);
    }

    for(auto i : arr) cout << i << " ";
  }
}