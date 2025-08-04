// 1831A - Twin Permutations Codeforces 
// Problem link : https://codeforces.com/problemset/problem/1831/A

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
void solve(){
    int n; cin >> n;
    vector<int> a(n), b;
    for(auto &i : a){
        cin >> i;
    }
    for(int i=0; i<n; i++){
        b.push_back(n+1 - a[i]);
    }
    for(int i : b){
        cout << i << " ";
    }
    cout << endl;

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
