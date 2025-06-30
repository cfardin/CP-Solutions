//1857A - Array Coloring Codeforces
// Problem link : https://codeforces.com/problemset/problem/1857/A
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    int n; cin >> n;
    int e(0), o(0);
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
        if(v[i]&1) o++;
        else e++;
    }
    if(o&1) cout << "NO\n";
    else cout << "YES\n";
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
