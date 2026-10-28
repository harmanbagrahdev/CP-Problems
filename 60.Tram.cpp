#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n; cin >> n;
  long long tram = 0;
  long long maxCap = INT_MIN;

  while(n--) {
    int leave, enter;
    cin >> leave >> enter;

    tram = tram - leave + enter;
    maxCap = max(maxCap, tram);
  }

  cout << maxCap << "\n";
}