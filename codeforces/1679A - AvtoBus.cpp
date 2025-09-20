// 1679A - AvtoBus Codeforces 
// https://codeforces.com/problemset/problem/1679/A

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


void solve(){ 
    ll n; cin >> n;
    if(n < 4 || n % 2 != 0){
        cout << -1 << endl;
        return;
    }
    ll mn = (n+5)/6;
    ll mx = n / 4;
    cout << mn << " " << mx << endl;
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
