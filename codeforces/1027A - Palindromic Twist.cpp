// 1027A - Palindromic Twist Codeforces
// Problem link : https://codeforces.com/problemset/problem/1027/A

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
void solve(){
    int n; cin >> n;
    string s; cin >> s;
    bool flag = true;
    for(int i=0; i<n/2; i++){
        if(s[i] != s[n-1-i]){
            int num = abs(s[i] - s[n-1-i]);
            if(num != 2){
                flag = false;
                break;
            }
        }
    }
    if(flag) cout << "YES\n";
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
