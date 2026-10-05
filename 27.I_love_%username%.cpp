#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> points(n);
  for(int i = 0; i < n; i++) {
    cin >> points[i];
  }

  int maxPast = points[0];
  int minPast = points[0];
  int cnt = 0;

  for(int i = 1; i < n; i++) {
    if(points[i] > maxPast) {
      maxPast = points[i];
      cnt++;
    }

    else if(points[i] < minPast) {
      minPast = points[i];
      cnt++;
    }
  }

  cout << cnt << endl;
}