// Codeforces problem : 1535A - Fair Playoff
// Problem link : https://codeforces.com/problemset/problem/1535/A

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int win1 = max(a, b);
        int win2 = max(c, d);
        if(win1 < min(c, d) || win2 < min(a, b)) cout << "NO\n";
        else cout << "YES\n";
    }
    return 0;
}

