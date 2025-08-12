///  2131C- Make it Equal Codeforces
// Problem link : https://codeforces.com/contest/2131/problem/C

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    int n, k; cin >> n >> k;
    vector<int>s(n), t(n);

    for(int i=0; i<n; i++){
        cin >> s[i];
    }
    for(int i=0; i<n; i++){
        cin >> t[i];
    }
    map<int, int> m;
    for(int i : s){
        m[i % k]++, m[k - i % k]++;
    }
    for(int i : t){
        m[i % k]--, m[k - i % k]--;
    }

    for(auto i : m){
        if(i.second){
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}

int main() {
    ios::sync_with_stdio(false);
   cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
