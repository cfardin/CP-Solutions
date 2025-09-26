// 1624B - Make AP Codeforces
// https://codeforces.com/problemset/problem/1624/B

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


void solve(){
    int a, b, c; cin >> a >> b >> c;

    bool flag = false;
    int n_a = 2*b - c;
    if(n_a / a > 0 && n_a % a == 0){
        flag = true;
    }
    int n_b = (a + c) / 2;
    if(n_b / b > 0 && n_b % b == 0 && (a - c) % 2 == 0){
        flag = true;
    }
    int n_c = 2 * b - a;
    if(n_c / c > 0 && n_c % c == 0){
        flag = true;
    }

    if(flag) cout << "YES\n";
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
