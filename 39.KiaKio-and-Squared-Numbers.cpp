#include <bits/stdc++.h>
using namespace std;

int transition(long long el) {
  long long sum = 0;

  while(el) {
    int digit = el % 10;
    sum += (digit*digit);
    el /= 10;
  }

  return sum;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;

  while(t--) {
    int n;
    cin >> n;

    unordered_map<long long, int> freq;
    long long ans = 0;

    for(int i = 0; i < n; i++) {
      long long el;
      cin >> el;

      for(int i = 0; i < 30; i++) {
        el = transition(el);  
      }

      ans += freq[el];
      freq[el]++; // updating frequency
    }

    cout << ans << "\n";
  }
}