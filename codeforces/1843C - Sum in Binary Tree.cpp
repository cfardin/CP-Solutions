// codeforces : 1843C - Sum in Binary Tree (binary tree)
// Problem link : https://codeforces.com/problemset/problem/1843/C

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    ll n; cin >> n;
    ll ans(0);
    while(n){
        ans += n;
        n>>=1;
    }
    cout << ans << "\n";
}

int main(){
    ios :: sync_with_stdio(false);
   // cin.tie(0);
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}

