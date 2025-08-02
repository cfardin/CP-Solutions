// Subarray Sums II CSES
// Problem link : https://cses.fi/problemset/task/1661/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n, k; cin >> n >> k;
    vector<int> v(n);
    map<ll, int> m;
    ll sum(0), ans(0);
    m[0] = 1;
    for(auto &i : v) cin >> i;

    for(int i : v){
        sum += i;
        ll need = sum - k;
        ans += m[need];
        m[sum]++;
    }
    cout << ans << "\n";
}
