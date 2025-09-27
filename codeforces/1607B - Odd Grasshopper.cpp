// 1607B - Odd Grasshopper Codeforces
// https://codeforces.com/problemset/problem/1607/B

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


void solve(){
    ll x, n; cin >> x >> n;
    ll ans, p;
    if(n % 4 == 0) p = 0;
    else if(n % 4 == 1) p = -n;
    else if(n % 4 == 2) p = 1;
    else if(n % 4 == 3) p = n + 1;


    if(x % 2 == 0){
        ans = x + p;
    } else ans = x - p;
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
