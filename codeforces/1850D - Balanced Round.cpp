// 1850D - Balanced Round Codeforces
// Problem link : https://codeforces.com/problemset/problem/1850/D

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    int n, k; cin >> n >> k;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int num(0), ans(0);

    for(int i=1; i<n; i++){
        if(a[i] - a[i-1] > k){
            num = 1;
        }
        else{   
            num++;
        }
        ans = max(ans, num);
    }
    cout << n - ans << endl;
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

