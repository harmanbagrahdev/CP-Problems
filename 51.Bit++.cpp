#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;

  int x = 0;
  
  for(int i = 0; i < n; i++) {
    string statement;
    cin >> statement;

    if(statement == "++X" || statement == "X++") x++;
    else x--;
  }

  cout << x << "\n";
}