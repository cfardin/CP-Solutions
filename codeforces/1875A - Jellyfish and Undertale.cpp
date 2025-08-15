/// 1875A - Jellyfish and Undertale Codeforces
// Problem link : https://codeforces.com/problemset/problem/1875/A

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


void solve(){
    int a, b, n; cin >> a >> b >> n;
    ll c = 0;
    vector<int> v(n);
    for(int &i : v){
        cin >> i;
    }
    for(int i=0; i<n; i++){
        c += min(a - 1, v[i]);
    }


    cout << c + b<< endl;

}

int main() {
    ios::sync_with_stdio(false);
   cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
