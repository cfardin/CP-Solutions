// 1881A - Don't Try to Count Codeforces
// https://codeforces.com/problemset/problem/1881/A

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


void solve(){
    int n, m; cin >> n >> m;
    string x, s; 
    cin >> x; 
    cin >> s;
    for(int i=0; i<6; i++){
        int f = x.find(s);
        if(f < x.size()){
            cout << i << endl;
            return;
        }
        x += x;
    }
    cout << -1 << endl;
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
