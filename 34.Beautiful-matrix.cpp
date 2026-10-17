#include <bits/stdc++.h>
using namespace std;

void solve(vector<vector<int>>& m, int r, int c, int moves) {
  // move rows
  while(r != 2) {
    int next = (r < 2) ? r + 1 : r - 1;
    swap(m[r], m[next]);
    r = next;
    moves++;
  }

  // move columns
  while(c != 2) {
    int next = (c < 2) ? c + 1 : c - 1;

    for(int i = 0; i < 5; i++) swap(m[i][c], m[i][next]);
    c = next;
    moves++;
  }

  cout << moves << endl;
}

int main() {
  vector<vector<int>> m(5, vector<int>(5));
  int r = -1, c = -1;
  int moves = 0;

  for(int i = 0; i < 5; i++) {
    for(int j = 0; j < 5; j++) {
      cin >> m[i][j];

      if(m[i][j] == 1) {
        r = i;
        c = j;
      }
    }
  }

  solve(m, r, c, moves);
}