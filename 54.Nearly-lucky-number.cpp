// Petya calls a number nearly lucky if the number of lucky digits in it is a lucky number
#include<bits/stdc++.h>
using namespace std;

// string input is better but whatever!

string solve(long long n) {
  int luckyCnt = 0;

  while(n) {
    int digit = n % 10;
    if(digit == 4 || digit == 7) luckyCnt++;
    n /= 10;
  }

  if(luckyCnt == 4 || luckyCnt == 7) {
    return "YES\n";
  }

  return "NO\n";
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  long long n;
  cin >> n;

  cout << solve(n);
}