// 1244B - Rooms and Staircases Codeforces
// Problem Link : https://codeforces.com/contest/1244/problem/B

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
void solve(){
    int n; cin >> n;
    string s; cin >> s;

    int ans1 = n, c1(0);
    for(int i=0; i<n; i++){
        ++c1;
        if(s[i] == '1'){
            ans1 = max(ans1, (i+1)*2);
            ++c1;
        }
    }
    ans1 = max(ans1, c1);

    reverse(s.begin(), s.end());

    int ans2 = n, c2(0);
    for(int i=0; i<n; i++){
        ++c2;
        if(s[i] == '1'){
            ans2 = max(ans2, (i+1)*2);
            ++c2;
        }
    }
    ans2 = max(ans2, c2);


    cout << max(ans1, ans2) << endl;
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
