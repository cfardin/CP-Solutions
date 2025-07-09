// 621A - Wet Shark and Odd and Even Codeforces
// Problem link : https://codeforces.com/problemset/problem/621/A

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main(){
    ios :: sync_with_stdio(false);
    
    int n; cin >> n;
    vector<int>v(n);
    ll sum(0);
    for(int i=0; i<n; i++){
        cin >> v[i];
        sum += v[i];
    }
    if(sum & 1){
        ll mx = INT_MAX;
        for(int i=0; i<n; i++){
            if(v[i] < mx && (v[i] & 1)) mx = v[i];
        }
        cout << sum - mx << endl;
    }
    else cout << sum << endl;

}
