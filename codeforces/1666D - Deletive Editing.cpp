// 1666D - Deletive Editing Codeforces
// https://codeforces.com/problemset/problem/1666/D


#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


void solve(){
    string a, b;
    cin >> a >> b;
    map<char, int> f;
    for (char x : b) f[x]++;

    for (int i =a.size() - 1; i >= 0; i--) {
        if (f[a[i]] > 0) {
            f[a[i]]--;
        } else {
            a[i] = '.';
        }
    }
    string c = "";
    for(int i=0; i<a.size(); i++){
        if(a[i] != '.'){
            c+= a[i];
        }
    }
    if(c == b){
        cout << "YES\n";
    }
    else cout << "NO\n";

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

