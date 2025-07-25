// Maximum Subarray Sum CSES 
// Problem Link : https://cses.fi/problemset/task/1643
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll n; cin >> n;
    vector<ll> a(n);
    for(ll &i : a){
        cin >> i;
    }
    ll c_sum = a[0], m_sum = a[0];

    for(int i=1; i<n; i++){
        c_sum = max(a[i], c_sum + a[i]);
        m_sum = max(m_sum, c_sum);
    }

    cout << m_sum << endl;
}
