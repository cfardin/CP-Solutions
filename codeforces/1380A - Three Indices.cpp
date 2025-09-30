// 1380A - Three Indices Codeforces
// https://codeforces.com/problemset/problem/1380/A

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    int n; cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    int i, j, k;
    bool flag = false;
    for(int i=1; i<n-1; i++){
        if(a[i] > a[i-1] && a[i] > a[i+1]){
            cout << "YES\n";
            cout << i << " " << i+1 << " " << i+2 << endl;
            return; 
        }
    }
    cout << "NO\n"; 

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
