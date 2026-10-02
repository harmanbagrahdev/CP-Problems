#include <bits/stdc++.h>
using namespace std;

bool canPlace() {
  // The first cow is placed at the first stall to leave maximum room for the remaining cows.
  // int cowsPlaced = 1;
  // int lastPos = s[0];

  // for(int i = 1; i < s.size(); i++) {
  //   if(s[i] - lastPos >= d) {
  //     cowsPlaced++;
  //     lastPos = s[i];
  //   }

  //   if(cowsPlaced >= k) return true;
  // }

  // return false;
}

int maxMoney(int n, int k) {
  vector<int> days;
  for(int i = 1; i <= n; i++) {
    days.push_back(i++);
  }
  int maxDistance = n - 1;

  // for(int d = 1; d <= maxDistance; d++) {
  //   if(!canPlace(s, k, d)) return d - 1;
  // }

  // return maxDistance;
}

int main() {
  int t;
  cin >> t;

  while(t--) {
    int n, k;
    cin >> n >> k;

    cout << maxMoney(n, k) << endl;
  }
}