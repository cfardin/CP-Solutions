// 1559A - Mocha and Math Codeforces
// https://codeforces.com/problemset/problem/1559/A

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    int n; cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    int x = a[0];
    for(int i=0; i<n; i++){
       x &= a[i];
    }
    cout << x << endl; 

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
