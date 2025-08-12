// 2131B - Alternating Series Codeforces 
// Problem link : https://codeforces.com/contest/2131/problem/B

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
void solve(){
    int n; cin >> n;
    if(n & 1){
        for(int i=0; i<n; i++){
            if(i % 2 == 0) cout << -1 << " ";
            else cout << 3 << " ";
        }
    }
    else{
        if(n == 2){
            cout << -1 << " " << 2;
        }
        else{
            for(int i=0; i<n-2; i++){
                if(i % 2 == 0) cout << -1 << " ";
                else cout << 3 << " ";
            }
            cout << -1 << " " << 2;
        }
    }
    cout << "\n";
}
 
 
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
