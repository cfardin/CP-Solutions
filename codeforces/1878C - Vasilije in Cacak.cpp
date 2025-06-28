// 1878C - Vasilije in Cacak Codeforces
// Problem link : https://codeforces.com/contest/1878/problem/C

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    ll a, b, c;  cin >> a >> b >> c;
    ll total = (a * (a + 1)) / 2;

    ll min_sum = (b * (b + 1)) / 2;

    ll num = abs(a-b);
    ll sb = (num * (num + 1)) / 2;
    ll max_sum = abs(total - sb);

    if(c >= min_sum && c <= max_sum)  cout << "YES\n";
    else cout << "NO\n";

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
