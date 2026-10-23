#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;

  char stones[n];
  int cnt = 0;
  for(int i = 0; i < n; i++) {
    cin >> stones[i];
  }

  for(int i = 1; i < n; i++) {
    if(stones[i-1] == stones[i]) cnt++;
  }

  cout << cnt << "\n";
}