// 1675B - Make It Increasing
// https://codeforces.com/problemset/problem/1675/B

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


void solve(){ 
    int n; cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin >> a[i];
    int ans = 0;
    for(int i = n-2; i>=0; i--){
        while(a[i] >= a[i+1] && a[i] > 0){
            a[i] /= 2;
            ans++;
        }
        if(a[i] == a[i+1]){
            cout << -1 << endl;
            return;
        }
    }

    cout << ans << endl;
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
