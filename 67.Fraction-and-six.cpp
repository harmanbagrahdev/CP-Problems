#include <iostream>
#include <string>

using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    
    string p, q;
    cin >> p >> q;

    // Rule 1: The remaining numerator must have exactly 3 characters ("six")
    if (n - m != 3) {
        cout << "No\n";
        return;
    }

    // Track relative counts for only 's', 'i', and 'x'
    int diff_s = 0, diff_i = 0, diff_x = 0;

    for (char c : p) {
        if (c == 's') diff_s++;
        else if (c == 'i') diff_i++;
        else if (c == 'x') diff_x++;
    }

    for (char c : q) {
        if (c == 's') diff_s--;
        else if (c == 'i') diff_i--;
        else if (c == 'x') diff_x--;
    }

    // Rule 2: There must be exactly 1 extra 's', 'i', and 'x' remaining
    if (diff_s == 1 && diff_i == 1 && diff_x == 1) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  
  while (t--) {
    solve();
  }
}
