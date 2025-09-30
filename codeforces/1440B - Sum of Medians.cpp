// 1440B - Sum of Medians Codeforces
// https://codeforces.com/problemset/problem/1440/B

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    int n, k; cin >> n >> k;
    vector<int> a(n * k);
    for(int i=0; i<n * k; i++){
        cin >> a[i];
    }
    ll sum(0);
    int point = n * k;
    while(k--){
        point -= (n/2 + 1);
        sum += a[point]; 
    }
    cout << sum << endl;
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
