#include<bits/stdc++.h>
using namespace std;

void solve(long long x) {
  int moves = 0;

  while(x) {
    if(x >= 5) {
      x -= 5;
      moves++;
    }
    else if(x < 5 && x >= 4) {
      x -= 4;
      moves++;
    }
    else if(x < 4 && x >= 3) {
      x -= 3;
      moves++;
    }
    else if(x < 3 && x >= 2) {
      x -= 2;
      moves++;
    }
    else {
      x -= 1;
      moves++;
    }
  }

  cout << moves << "\n";
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  long long x;
  cin >> x;

  solve(x);
}