//Counting Divisors CSES 
//Problem link : https://cses.fi/problemset/task/1713/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


void solve(){
    int n, c(0); cin >> n;
    for(int i=1;i*i<=n; i++){
        if(n%i==0){
            if(i == n/i) c++;
            else c+=2;
        }
    }
    cout << c << "\n";
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
