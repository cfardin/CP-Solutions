// 1859A - United We Stand Codeforces 
// Problem link : https://codeforces.com/problemset/problem/1859/A

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


void solve(){
    int n; cin >> n;
    vector<int>a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    vector<int>b;
    vector<int>c;

    sort(a.begin(), a.end());
    if(a[0] == a[n-1]){
        cout << -1 << endl;
        return;
    }
    else{
        int m = *max_element(a.begin(), a.end());
        for(int i=0; i<n; i++){
            if(a[i] != m) b.push_back(a[i]);
            else c.push_back(a[i]);
        }
        if(b.size() == 0) cout << -1 << endl;
        else{
            cout << b.size() << " " << c.size() << endl;
            for(auto x : b) cout << x << " ";
            cout << endl;
            for(auto x : c) cout << x << " ";
            cout << endl;
        }
    }
}


int main(){
    ios :: sync_with_stdio(false);
    //  cin.tie(0);
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;

}
