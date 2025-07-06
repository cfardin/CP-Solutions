// 1876A-Helmets in Night Light Codeforces 
// Problem link : https://codeforces.com/problemset/problem/1876/A

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    ll n, p; cin >> n >> p;
    vector<pair<ll, ll>>v(n);
    vector<ll> a(n);
    vector<ll> b(n);
    ll min_cost = p, shared = 1;
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int i=0; i<n; i++){
        cin >> b[i];
    }
    for(int i=0; i<n; i++){
        v[i] = {b[i], a[i]};
    }

    sort(v.begin(), v.end());


    for(auto a : v){
        ll can_share = a.second;
        ll sharing_cost = a.first;

        if(sharing_cost >= p) break;
        if(shared + can_share > n){
            min_cost += (n - shared) * sharing_cost;
            shared = n;
            break;
        }
        else{
            min_cost += can_share * sharing_cost;
            shared += can_share;
        }


    }

    min_cost += (n - shared) * p; 
    cout << min_cost << endl;


}

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while(t--){
        solve();
    }
    
}
