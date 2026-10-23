#include<bits/stdc++.h>
using namespace std;

int solve(int t) {
  int cheese, sausage;
  cin >> cheese >> sausage;
  
  if(cheese <= sausage) return -1; // no sandwiches

  for (int k = cheese / 2; k >= 1; --k) {
    // Condition 1: We must have enough sausages to put at least 1 in each sandwich
    if (sausage < k) continue;
    
    // Condition 2: Leftover cheese must be enough to counter leftover sausages.
    // Each sandwich initially gets 2 cheese and 1 sausage to keep Difference = 1
    // If we add another sausage to a sandwich, we must add another cheese to keep the diff > 0.
    // Therefore, leftover sausages cannot exceed leftover cheese.
    int rem_cheese = cheese - 2 * k;
    int rem_sausage = sausage - k;
    
    if (rem_cheese >= rem_sausage) {
      return k; // maximum possible sandwiches
    }
  }
  
  return -1;
}
 
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;

  while(t--) {
    cout << solve(t) << "\n";
  }
}