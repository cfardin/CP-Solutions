//Codeforces  : 2008C - Longest Good Array
//Problem link : https://codeforces.com/problemset/problem/2008/C

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    int a, b; cin >> a >> b;
    int n(1), total(1);
    for(int i=a; i<b; i+=n){
        total++;
        n++;
    }
    if(a == b) cout << 1 << "\n";
    else cout << total << "\n";

}

int main(){
    ios :: sync_with_stdio(false);
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}

