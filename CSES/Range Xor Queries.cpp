// Range Xor Queries CSES
// Problem link : https://cses.fi/problemset/task/1650/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main(){
    ll n, q; cin >> n >> q;
    vector<ll> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    vector<ll> p(n + 1, 0);

    for(int i=1; i<=n; i++){
        p[i] = p[i-1] ^ arr[i-1];
    }
 
     while(q--){
        int x, y; cin >> x >> y;
    
        cout << (p[y] ^ p[x-1]) << endl; 
     }
    
}
