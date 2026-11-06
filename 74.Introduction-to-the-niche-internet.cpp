#include <bits/stdc++.h>
using namespace std;
// Time limit!!!!

bool checkPermutation(const vector<long long>& arr, int k) {
  int pleasant_count = 1; // 1st donation is always pleasant
  long long runningSum = arr[0];
  int n = arr.size();

  for (int m = 2; m <= n; ++m) {
    long long current_donation = arr[m - 1];
    
    // Using cross-multiplication to avoid floating-point inaccuracies
    if (current_donation * (m - 1) >= runningSum) {
      pleasant_count++;
    }
    runningSum += current_donation;
  }

  return pleasant_count == k;
}

void solve() {
  int n, k;
  cin >> n >> k;
  vector<long long> a(n);
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }

  sort(a.begin(), a.end());

  do {
    if (checkPermutation(a, k)) {
      cout << "YES\n";
      for (int i = 0; i < n; ++i) {
        cout << a[i] << (i == n - 1 ? "" : " ");
      }
      cout << "\n";
      return;
    }
  } while (next_permutation(a.begin(), a.end()));

  cout << "NO\n";
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int t;
  if (cin >> t) {
    while (t--) {
      solve();
    }
  }
}
