#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  long long n;
  int k;
  cin >> n >> k;
  
  while(k--) {
    long long temp = n;
    int digit = temp % 10;
    if(digit != 0) n--;
    else n /= 10;
  }

  cout << n << "\n";
}