#include <bits/stdc++.h>
using namespace std;

vector<int> squareYear(int y) {
  int check = round(sqrt(y));

  if(check * check == y) {
    int half1 = check / 2;
    int half2 = check - half1;

    vector<int> ans;
    ans.push_back(half1);
    ans.push_back(half2);

    return ans;
  }

  return {-1};
}

int main() {
  int t;
  cin >> t;

  while(t--) {
    string n;
    cin >> n;
    int year = stoi(n);

    vector<int> ans =  squareYear(year);

    for(auto i : ans) {
      cout << i << " ";
    } cout << endl;
  }

}