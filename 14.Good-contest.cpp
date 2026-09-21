#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;

  while(t--) {
    int n;
    cin >> n;

    int arr[3];
    for(int i = 0; i < 3; i++) cin >> arr[i];

    cout << n - min({arr[0], arr[1], arr[2]}) << endl;
  }
}