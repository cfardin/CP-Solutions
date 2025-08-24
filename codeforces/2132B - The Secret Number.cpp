// 2132 B. The Secret Number Codeforces
// Problem link : https://codeforces.com/contest/2132/problem/B

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    ll n; cin >> n;
    vector<ll> ans;
    ll c = 10;
    while(c + 1 <= n){
        if(n % (c + 1) == 0){
            ans.push_back(n / (c + 1));
        }
        c *= 10;
    }
    sort(ans.begin(), ans.end());
    cout << ans.size() << endl;
    for(ll i : ans){
        cout << i << " ";
    }
    if(ans.size()) cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
