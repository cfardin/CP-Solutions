// 2126C - I Will Definitely Make It Codeforces 
// Problem link : https://codeforces.com/problemset/problem/2126/C

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


void solve(){
    int n, k; cin >> n >> k;
    vector<int> a(n);
    for(auto &i : a){
        cin >> i;
    }
    vector<int> v;
    for(int i=0; i<n; i++){
        if(a[i] >= a[k-1]) v.push_back(a[i]);
    }

    sort(v.begin(), v.end());
    bool falg = true;
    for(int i=0; i<v.size()-1; i++){
        if(abs(v[i] - v[i+1]) > a[k-1]){
            falg = false;
            break;
        }
    }
    if(falg) cout << "YES\n";
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
