// 1373B - 01 Game Codeforces
// https://codeforces.com/problemset/problem/1373/B

 #include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    string s; cin >> s;
    int c1(0), c0(0);
    for(int i=0; i<s.size(); i++){
        if(s[i] == '1') c1++;
        else c0++;
    }
    int op = min(c1, c0);
    if(op & 1){
        cout << "DA\n";
    }
    else cout << "NET\n";

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
