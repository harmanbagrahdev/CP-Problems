#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;

  while(t--) {
    int a, b;
    cin >> a >> b;

    cout << b-a << endl; // (c−a)+(b−c) --> just need to take c = b => second bracket becomes zero and we are done!
  }
}