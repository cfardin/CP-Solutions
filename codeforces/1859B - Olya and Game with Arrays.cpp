// 1859B - Olya and Game with Arrays Codeforces
// https://codeforces.com/problemset/problem/1859/B

/*
Fardin
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    int n; cin >> n;
    vector<ll> second;
    ll low = INT_MAX;
    for(int i=0; i<n; i++){
        int num; cin >> num;
        vector<ll> a(num);
        for(auto &x : a){
            cin >> x;
        }
        sort(a.begin(), a.end());
        second.push_back(a[1]);
        low = min(low, a[0]);
    }

    sort(second.begin(), second.end());
    ll second_sum = 0;
    for(int i : second){
        second_sum += i;
    }
    ll ans = low + second_sum - second[0];
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
