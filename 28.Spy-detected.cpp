#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;

  while(t--) {
    int n;
    cin >> n;

    vector<int> a(n);
    map<int, int> freqRecord;

    for(int i = 0; i < n; i++) {
      cin >> a[i];
      freqRecord[a[i]]++;
    }

    for(int i = 0; i < n; i++) {
      if(freqRecord[a[i]] == 1) {
        cout << i+1 << endl;
        break;
      }
    }

  }
}