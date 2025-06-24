// 1883B - Chemistry Codeforces
// Problem link : https://codeforces.com/problemset/problem/1883/B

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


void solve(){
    int n, k; cin >> n >> k;
    string s; cin >> s;
    map<char, int>f;
    for(int i=0; i<n; i++){
        if(f.find(s[i]) == f.end()) f.insert(make_pair(s[i], 1));
        else f[s[i]]++;
    }

    int x(0);
    for(auto i : f){
        if(i.second%2!=0) x++;
    }
    if(x > k+1) cout << "NO\n";
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
