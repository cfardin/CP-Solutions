// Codeforces : 2110A - Fashionable Array
//Problem link  : https://codeforces.com/problemset/problem/2110/A

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    int n; cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    if(v[0]%2 == v[n-1]%2){
        cout << 0 << endl;
        return;
    }
    int l = n, r = n;
    for(int i=1; i<n; i++){
        if(v[i]%2 != v[0]%2){
            l = i;
            break;
        }
    }
    for(int i=1; i<n; i++){
        if(v[n-1-i]%2 != v[n-1]%2){
            r = i;
            break;
        }
    }
    cout << min(l, r) << "\n";
}

int main(){
    ios :: sync_with_stdio(false);
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}

