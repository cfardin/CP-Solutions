// 1855B - Longest Divisors Interval Codeforces
// Problem link : https://codeforces.com/problemset/problem/1855/B

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    ll n; cin >> n;
    ll i = 1;
    while(n % i == 0){ 
        i++;
    }
    cout << i-1 << endl;

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
