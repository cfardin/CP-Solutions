// 1440A - Buy the String Codeforces
// https://codeforces.com/problemset/problem/1440/A

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    int n, c0, c1, h; cin >> n >> c0 >> c1 >> h;
    string s; cin >> s;
    int total(0);
    for(int i=0; i<n; i++){
        if(s[i] == '0'){
            total += min(c0, c1 + h);
        }
        else total += min(c1, c0 + h);
    }
    cout << total << endl;

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
