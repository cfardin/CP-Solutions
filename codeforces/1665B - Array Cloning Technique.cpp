// 1665B - Array Cloning Technique Codeforces
// https://codeforces.com/problemset/problem/1665/B

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


void solve(){
   int n; cin >> n;
   vector<int> a(n);
   for(int i=0; i<n; i++){
    cin >> a[i];
   }
   int op(0), c_freq(0);
   unordered_map<int, int> f;
   for(int i : a){
    f[i]++;
   }
   for(auto i : f){
    if(i.second > c_freq){
        c_freq = i.second;
    }
   }
   while(c_freq < n){
    op++;
    if(c_freq * 2 <= n){
        op += c_freq;
        c_freq *= 2;
    } else{
        op += (n - c_freq);
        c_freq = n;
    }
   }

   cout << op << endl;

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
