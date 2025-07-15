/// 1837A - Grasshopper on a Line codeforces 
/// Problem link : https://codeforces.com/problemset/problem/1837/A

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    int x, k; cin >> x >> k;

    if(x % k != 0){
        cout << 1 << endl;
        cout << x << endl;
        return;
    }
    int n = 0;
    for(int i=1; i<x; i++){
        if(i % k !=0){
            if(i > n) n = i;
        }
    }
    cout << 2 << endl;
    cout << n << " " << x - n << endl;

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
