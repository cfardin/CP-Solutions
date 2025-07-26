// 2126D - This Is the Last Time Codeforces 
// Problem link : https://codeforces.com/problemset/problem/2126/D

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

struct ds{
    int a, b, c;
     bool operator<(const ds& o) const {
        return tie(a, b, c) < tie(o.a, o.b, o.c);
    }
};


void solve(){
    int n, k; cin >> n >> k;
    vector<ds> a(n);
    for(int i=0; i<n; i++){
        cin >> a[i].a >> a[i].b >> a[i].c;
    }
    sort(a.begin(), a.end());

    for(int i=0; i<n; i++){
        if(k >= a[i].a && k <= a[i].b){
            k = max(k, a[i].c);
        } else continue;
    }

    cout << k << endl;

}

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
