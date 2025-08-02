// Subarray Sums I CSES 
// Problem link : https://cses.fi/problemset/task/1660/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n, k; cin >> n >> k;
    vector<int> v(n);
    map<ll, int> m;
    ll sum(0), ans(0);
    m[0] = 1;
    for(auto &i : v){
        cin >> i;
        sum += i;
        if(m[sum - k]){
            ans++;
        }
        m[sum]++;
    }
    cout << ans << endl;
}
