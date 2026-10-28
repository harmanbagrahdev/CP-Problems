#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int m, n;
  cin >> m >> n;

  int boardArea = m*n;
  if(boardArea % 2 == 0) {
    cout << boardArea / 2 << "\n";
  }
  else {
    boardArea--;
    cout << boardArea / 2 << "\n";
  }
}