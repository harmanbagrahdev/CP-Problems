#include<bits/stdc++.h>
using namespace std;

int Mex(vector<int>& a) {
  int len = a.size();
  vector<int> present(len + 1, false); // hash map

  for(int x : a) {
    if(x >= 0 && x <= len) present[x] = true;
  }

  int mex = 0;
  while(present[mex]) mex++;

  return mex;
}

int kthLargestF(vector<int>& arr, int k) {
  int n = arr.size();
  vector<int> a, f;

  for(int i = 0; i < n; i++) {
    a.push_back(arr[i]);
    f.push_back(Mex(a));
  }

  sort(f.begin(), f.end(), greater<int>());
  return f[k-1];
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;

  while(t--) {
    int n, k;
    cin >> n >> k;

    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
      cin >> arr[i];
    }

    int best = kthLargestF(arr, k); // baseline
    int bi = -1;
    int bj = -1;

    for(int i = 0; i < n; i++) {
      for(int j = i+1; j < n; j++) {
        swap(arr[i], arr[j]);
        int val = kthLargestF(arr, k);
        swap(arr[i], arr[j]); // unswap

        if(val > best) {
          best = val;
          bi = i;
          bj = j;
        }
      }
    }

    if(bi == -1) cout << -1 << "\n";
    else cout << bi + 1 << " " << bj + 1 << "\n";
  }
}