// 1791C - Prepend an Append Codeforces 
// Problem link https://codeforces.com/contest/1791/problem/C

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    int n; cin >> n;
    string s; cin >> s;
    while(s.size() > 1){
        if(s.front() != s.back()){
            s.erase(s.begin());
            s.erase(s.end() - 1);
        }
        else break;
    }
    cout << s.size() << endl;
}

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while(t--){
        solve();
    }

}
