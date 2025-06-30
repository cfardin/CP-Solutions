//1917B - Erase First or Second Letter Codeforces
// Problem link : https://codeforces.com/problemset/problem/1917/B
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    int n; cin >> n;
    string s; cin >> s;
    map<char, int>m;
    vector<int> d(n, 0);
    int c(0);
    for(int i=0; i<n; i++){
       m[s[i]]++;
       if(m[s[i]] == 1){
            c++;
       }
       d[i] = c;
    }
    int ans(0);
    for(int i=0; i<n; i++){
        ans += d[i];
    }
    cout << ans << endl;
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
