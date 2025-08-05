// Subarray Divisibility CSES
// Problem link : https://cses.fi/problemset/task/1662/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n; cin >> n;
    vector<ll> a(n);
    for(auto &i : a){
        cin >> i;
    }
    ll sum = 0, c = 0;
    map<ll, int> m;
    m[0] = 1;
    for(int i : a){
        sum = (sum + i) % n;
        if(sum < 0){
            sum += n;
        }
        c += m[sum];
        m[sum]++;
    }
    cout << c << endl;;

}
