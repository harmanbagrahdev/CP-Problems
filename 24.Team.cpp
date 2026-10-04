#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  int col = 3;
  vector<vector<int>> views(n, vector<int>(col));

  for(int i = 0; i < n; i++) {
    for(int j = 0; j < 3; j++) {
      cin >> views[i][j];
    }
  }

  int cnt = 0;

  for(auto row : views) {
    int sum = 0;
    for(int view : row) {
      sum += view;
    }

    if(sum >= 2) cnt++;
  }

  cout << cnt << endl; // No. of solvable problems
}