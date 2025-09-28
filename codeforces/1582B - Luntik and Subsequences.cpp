// 1582B - Luntik and Subsequences Codeforces
// https://codeforces.com/problemset/problem/1582/B

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    int n; cin >> n;
    vector<ll> a(n);
    ll c1(0), c0(0);
    for(int i=0; i<n; i++){
        cin >> a[i];
        if(a[i] == 1) c1++;
        else if(a[i] == 0) c0++;
    }
    ll ways = pow(2, c0) * c1;
    cout << ways << endl;

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
