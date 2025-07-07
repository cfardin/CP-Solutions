// Coins And Triangle Codechef (Binary Search) 1000;
// Problim link : https://www.codechef.com/practice/course/binary-search/INTBINS01/problems/TRICOIN?tab=statement

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool check(ll mid, int n){
    return (mid*(mid + 1))/2 <= n;
}

void solve(){
    int n; cin >> n;
    ll l = 0, r = 1e9;
    ll ans = -1;
    
    while(l <= r){
        ll mid = l + (r - l)/2;
        
        if(check(mid, n)){
            ans = mid;
            l = mid + 1;
        }
        else r = mid - 1;
    }
    
    cout << ans << endl;
    
}

int main() {
    int t; cin >> t;
    while(t--){
        solve();
    }
}
