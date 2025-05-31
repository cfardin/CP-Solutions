// Codeforces : 1915C - Can I Square?
// Problem link : https://codeforces.com/problemset/problem/1915/C

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool is_root(ll sum){
    ll root = sqrt(sum);
    return (root * root == sum);
}

void solve(){
    int n; cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    ll sum = accumulate(v.begin(), v.end(), 0ll);

    if(is_root(sum)) cout << "YES\n";
    else cout << "NO\n";
}

int main(){
    ios :: sync_with_stdio(false);
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}

