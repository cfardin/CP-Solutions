// 2148D - Destruction of the Dandelion Fields Codeforces
// Problem link : https://codeforces.com/problemset/problem/2148/D

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){ 
   int n; cin >> n;
   vector<int> odds;
   ll ans(0);
   for(int i=0; i<n; i++){
        int num; cin >> num;
        if(num & 1) odds.push_back(num);
        else ans+= num;
   }
   if(odds.size() == 0){
    cout << 0 << endl;
   }
   else{
    sort(odds.rbegin(), odds.rend());
    int m = odds.size();
    m = ceil(m / 2.0);
    for(int i=0; i<m; i++){
        ans += odds[i];
    }

    cout << ans << endl;
   }
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
