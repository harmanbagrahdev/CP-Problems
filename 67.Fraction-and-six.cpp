#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;

    while (t--) {
        int n, m;
        string p, q;
        cin >> n >> m >> p >> q;

        int d[26] = {};
        for(char c : p) d[c - 'a']++;
        for(char c : q) d[c - 'a']--;
        
        bool ok = true;
        
        for(int i = 0; i < 26; i++) {
            char c = 'a' + i;
            int need = (c == 's' || c == 'i' || c == 'x') ? 1 : 0;
            if (d[i] != need) ok = false;
        }

        cout << (ok ? "YES" : "NO") << "\n";
    }
}