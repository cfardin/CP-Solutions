// CSES problem : Missing Number
// Problem link : https://cses.fi/problemset/task/1083/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    ll n; cin >> n;
    int num(0), sum(0);
    vector<int> v(n-1);
    for(int i=0; i<n-1; i++){
        cin >> v[i];
        sum += v[i];
    }
    num = n*(n + 1) / 2;
    cout << num - sum << "\n";


    return 0;
}

