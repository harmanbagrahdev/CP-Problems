#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, h;
  cin >> n >> h;

  int w = 0; // width of person

  vector<int> friends(n);
  for(int i = 0; i < n; i++) {
    cin >> friends[i];
  }

  for(int x : friends) {
    if(x > h) w += 2;
    else w++;
  }
  cout << w << "\n";
}