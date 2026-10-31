#include <bits/stdc++.h>
using namespace std;

void solve() {
  int x, y, z;
  cin >> x >> y >> z;

  int total_rounds = x + y + z;
  char bobs_move;

  if (x >= y && x >= z) {
    // Alice plays rock the most -> Bob plays paper
    bobs_move = 'P';
  } else if (y >= x && y >= z) {
    // Alice plays scissors the most -> Bob plays rock
    bobs_move = 'R';
  } else {
    // Alice plays paper the most -> Bob plays scissors
    bobs_move = 'S';
  }

  string ans(total_rounds, bobs_move);
  cout << ans << "\n";
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;

  while (t--) {
    solve();
  }
}
