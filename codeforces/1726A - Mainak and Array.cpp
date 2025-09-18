// 1726A - Mainak and Array Codeforces 
// https://codeforces.com/problemset/problem/1726/A

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){ 
    int n; cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    int mx = *max_element(a.begin(), a.end());
    int mn = *min_element(a.begin(), a.end());
    int ans = max(a[n-1] - mn, mx - a[0]);
    for(int i=1; i<n; i++){
        ans = max(ans, a[i-1] - a[i]);
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
