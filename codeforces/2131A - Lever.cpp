// 2131A - Lever Codeforces
// Problem link : https://codeforces.com/contest/2131/problem/A

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
void solve() {
    int n; cin >> n;
    vector<int> a(n), b(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int i=0; i<n; i++){
        cin >> b[i];
    }
    int c(0);
    while(true){
        bool m = false, p = false;
        for(int i=0; i<n; i++){
            if(a[i] > b[i]) m = true;
        }
        for(int i=0; i<n; i++){
            if(a[i] < b[i]) p = true;
        }
        c++;
        if(m){
            for(int i=0; i<n; i++){
            if(a[i] > b[i]){
                --a[i];
                break;
            }
        }
        }
        if(p){
            for(int i=0; i<n; i++){
            if(a[i] < b[i]){
                ++a[i];
                break;
            }
        }
        }
        if(!m) break;
       
        
    }
    cout << c << endl;
 
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
