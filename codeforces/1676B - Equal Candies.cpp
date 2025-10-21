// 1676B - Equal Candies Codeforces
// https://codeforces.com/problemset/problem/1676/B

/*
Fardin
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


void solve(){
   int n; cin >> n;
   vector<int> a(n);
   for(int i=0; i<n; i++){
    cin >> a[i];
   }
   sort(a.begin(), a.end());

   int sum = 0;
   for(int i=0; i<n; i++){
        sum += abs(a[i] - a[0]);
   }
   cout << sum << endl;
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
