// 1606A - AB Balance Codeforces
// https://codeforces.com/problemset/problem/1606/A

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


void solve(){
    string s; cin >> s;
    if(s[0] == s[s.size()-1]){
        cout << s << endl;
    }else{
        s[0] = s[s.size() - 1];
        cout << s << endl;
    }
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
