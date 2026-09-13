#include <bits/stdc++.h>
using namespace std;

string canSquare(long long add) {
  double check = llround(sqrtl(add));
  if(check * check == add) return "Yes";
  return "No";
}

int main() {
  int t;
  cin >> t;

  while(t--) {
    int n;
    cin >> n;
    
    long long squares[n];
    long long add = 0;
    
    for(int i = 0; i < n; i++) {
      cin >> squares[i];

      add += squares[i];
    }

    cout << canSquare(add) << endl;
  }

}