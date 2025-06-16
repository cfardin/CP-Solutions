// Codeforces : 762A - k-th divisor
// Problem link : https://codeforces.com/problemset/problem/762/A

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(0);
    ll a, b; cin >> a >> b;
    vector<ll>arr;
    for(ll i=1; i * i <= a; i++){
        if(a%i==0){
            arr.push_back(i);
            if(a/i != i) arr.push_back(a/i);
        }
    }
    sort(arr.begin(), arr.end());
    if(arr.size() < b ) cout << -1 << endl;
    else cout << arr.at(b-1) << endl;
   // for(int i : arr) cout << i << " ";

    return 0;
}
