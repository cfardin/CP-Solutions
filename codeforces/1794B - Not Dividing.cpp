// 1794B - Not Dividing Codeforces 
// Problem link : https://codeforces.com/problemset/problem/1794/B

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){ 
    int n; cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int i=0; i<n; i++){
        if(a[i] == 1){
            a[i]++;
        }
    }
    for(int i=1; i<n; i++){
        if(a[i] % a[i-1] == 0){
            a[i]++;
        }
    }
    for(int i : a){
        cout << i << " ";
    }
    cout << endl;
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
