#include <bits/stdc++.h>
using namespace std;

int cntDays(long long n, long long a, long long b, long long c) {
  long long j = 0; // journey
  long long days = 0;
  long long sum = a + b + c;
  long long cycle = n / sum;

  days += 3 * cycle;
  j += sum * cycle;

  if(j == n) return days;

  long long arr[3] = {a , b, c};
  for(int i = 0; i < 3; i++) {
    j += arr[i];
    days++;

    if(j >= n) break;
  }

  return days;
}

int main() {
  int t;
  cin >> t;

  while(t--) {
    long long n, a, b, c;
    cin >> n >> a >> b >> c;

    cout << cntDays(n, a , b, c) << endl;
  }

}