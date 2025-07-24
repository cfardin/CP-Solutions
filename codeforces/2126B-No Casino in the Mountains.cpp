// 2126B-No Casino in the Mountains Codeforces 
// Problem link : https://codeforces.com/contest/2126/problem/B

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


void solve(){
    int n, k; cin >> n >> k;
    vector<int> a(n);
    for(auto &i : a){
        cin >> i;
    }
    int c(0), h(0);
    for(int i=0; i<n; i++){
        if(a[i] == 0) c++;
        else c=0;

        if(c == k){
            h++;
            c=0;
            i++;
        }
    }
    cout << h << endl;

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
