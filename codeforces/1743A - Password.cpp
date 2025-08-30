// 1743A - Password Codeforces
// https://codeforces.com/problemset/problem/1743/A

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int fac(int a){
    if(a == 1) return 1;
    int ans = 1;
    for(int i=1; i<=a; i++){
        ans *= i;
    }
    return ans;
}

int ncr(int a, int b){
    if(b > a) return 0;
    if(b == 0 || b == a) return 1;

    return ncr(a-1, b-1) + ncr(a-1, b);

}

void solve(){
    int n; cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    cout << ncr(10-n, 2) * ncr(4, 2) << endl;
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
