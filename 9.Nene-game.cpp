#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  
  while(t--) {
    int len, numOfQueries;
    cin >> len >> numOfQueries;
    
    vector<int> kickPos(len);
    for(int i = 0; i < len; i++) cin >> kickPos[i];

    int firstKick = kickPos[0];
    int safePlayers = firstKick - 1; // As "first element of array - 1" number of elements can't be deleted!
    
    for(int i = 0; i < numOfQueries; i++) {
      int players;
      cin >> players;
      cout << min(players, safePlayers) << " ";
    }

    cout << endl;
  }
}