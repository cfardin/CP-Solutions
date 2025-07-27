// 1807D - Odd Queries Codeforces
// Problem link : https://codeforces.com/problemset/problem/1807/D

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


void solve(){
    int n, q; cin >> n >> q;
    vector<ll> a(n), prefix(n+1);

    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    prefix[1] = a[0];
    for(int i=2; i<=n; i++){
        prefix[i] = prefix[i-1] + a[i-1];
    }

    while(q--){
       ll l, r, k; cin >> l >> r >> k;
       ll ans = prefix[n] -(prefix[r] - prefix[l-1]) + k*(r-l+1);

       if(ans & 1) cout << "YES\n";
       else cout << "NO\n";
    }

}

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
