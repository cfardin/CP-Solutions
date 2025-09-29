// 1543A - Exciting Bets Codeforces
// https://codeforces.com/problemset/problem/1543/A

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    ll a, b; cin >> a >> b;
    if(a == b){
        cout << "0 0\n";
        return;
    }
    ll g = abs(a - b);
    ll op = min(b % g, g - (b % g));
    cout << g << " " << op << endl;
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
