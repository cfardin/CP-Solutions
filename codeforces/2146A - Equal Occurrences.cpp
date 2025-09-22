// 2146A - Equal Occurrences Codeforces 
// https://codeforces.com/problemset/problem/2146/A

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


void solve(){ 
    int n; cin >> n;
    vector<int> a(n);
    map<int, int> f;
    for(int i=0; i<n; i++){
        cin >> a[i];
        f[a[i]]++;
    }
    int ans(0), mf(0);
    for(auto i : f){
        if(i.second > mf){
            mf = i.second; 
        }
    }
    for(int i=1; i<=mf; i++){
        int num(0);
        for(auto x : f){
            if(x.second >= i){
                num++;
            }
        }
        ans = max(ans, num * i);
    }

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
