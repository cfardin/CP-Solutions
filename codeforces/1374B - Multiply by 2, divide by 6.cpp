// 1374B - Multiply by 2, divide by 6 Codeforces
// https://codeforces.com/problemset/problem/1374/B

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
   int n; cin >> n;
   int c2(0), c3(0);
   while(n % 2 == 0){
    n/= 2;
    c2++;
   }
   while(n % 3 == 0){
    n/= 3;
    c3++;
   }
   if(n == 1 && c2 <= c3){
    cout << 2 * c3 - c2 << endl;
   } else cout << -1 << endl;

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
