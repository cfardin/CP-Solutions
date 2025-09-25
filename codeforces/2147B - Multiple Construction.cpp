// 2147B - Multiple Construction Codeforces 
// https://codeforces.com/problemset/problem/2147/B


#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


void solve(){
   int n; cin >> n;
   for(int i=n; i>=1; i--){
    cout << i << " ";
   }
   cout << n << " ";
   for(int i=1; i<n; i++){
    cout << i << " ";
   }
   cout << endl;

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
