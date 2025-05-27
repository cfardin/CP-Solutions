// codeforces : 1520B - Ordinary Numbers
// Problem link : https://codeforces.com/problemset/problem/1520/B

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
    ios::sync_with_stdio(false);
    int t; cin >> t;
    while(t--){
        ll n, s, c(0);
        cin >> n;
        for(int i=1; i<=9; i++){
            s = i;
            while(s <= n){
                c++;
                s = s*10+i;
            }
        }
        cout << c << endl;
    }
    return 0;
}

