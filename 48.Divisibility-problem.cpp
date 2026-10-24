#include<bits/stdc++.h>
using namespace std;

int solveBrute(int a, int b) {
  int moves = 0;

  if(a%b == 0) return moves;

  while(a % b != 0) {
    a++;
    moves++;
  }

  return moves;
}

int solve(int a, int b) {
  if(a%b == 0) return 0;

  else return b - (a % b); // how much needs to be added to reach the next multiple of b
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;

  while(t--) {
    int a,b; // accepted but good to use long long as a and b can be upto 10^9
    cin >> a >> b;

    cout << solve(a, b) << "\n";
  }

}