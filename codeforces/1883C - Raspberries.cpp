// 1883	C - Raspberries Codeforces
// Problem link : https://codeforces.com/contest/1883/problem/C

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    int n, k; cin >> n >> k;
    vector<int>v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
  //  bool flag = true;
    int e(0), ans = INT_MAX;
    for(int i=0; i<n; i++){
        if(v[i]%2==0) e++;
        if(v[i]%k==0){
            ans = 0;
           // flag = false;
        }

        ans = min(ans, k - (v[i] % k));
    }

    if(k == 4){
        if(e >= 2) ans = min(ans, 0);
        if(e == 1) ans = min(ans, 1);
        if(e == 0) ans = min(ans, 2);
    }
    cout<< ans << endl;




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
