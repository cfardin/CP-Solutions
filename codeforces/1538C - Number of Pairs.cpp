// 1538C - Number of Pairs Codeforces
// Problem link : https://codeforces.com/problemset/problem/1538/C

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int check(vector<ll> &a, ll x){
    int i = 0;
    int j = a.size() - 1;
    int ans = 0;
    while(i < j){
        ll num = a[i] - a[j];
        if(num <= x){
            ans += (j - i);
            i++;
        }
        else j--;
    }
    return ans;
}

void solve(){
    ll n, l, r; cin >> n >> l >> r;
    vector<ll> a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    ll ans = check(a, r) - check(a, l-1);
    cout << ans << endl;
    
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
