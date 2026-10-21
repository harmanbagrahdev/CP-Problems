#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    
    while(t--) {
        long long a, b;

        if(a % b == 0) cout << 0 << "\n";
        int cnt = 0;

        while(a % b != 0) {
            a++;
            cnt++;
        }
        if(a%b == 0) cout << cnt << "\n";
    }
}