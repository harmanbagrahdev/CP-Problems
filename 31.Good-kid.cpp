#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;

  while(t--) {
    int n;
    cin >> n;

    vector<int> arr(n);

    int mini = INT_MAX;
    int minIndex = -1;

    for(int i = 0; i < n; i++) {
      cin >> arr[i];
      if(arr[i] < mini) {
        mini = arr[i];
        minIndex = i;
      }
    }
    arr[minIndex] += 1;

    long long maxProduct = 1;
    for(int i = 0; i < n; i++) {
      maxProduct *= arr[i];
    }

    cout << maxProduct << endl;
  }
}