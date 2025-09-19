// 1696A - NIT orz! Codeforces 
// https://codeforces.com/contest/1696/problem/A

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){ 
    int n, z; cin >> n >> z;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int i=0; i<n; i++){
        a[i] = a[i] | z;
        z = a[i] & z;
    }

    cout << *max_element(a.begin(), a.end())<< endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
