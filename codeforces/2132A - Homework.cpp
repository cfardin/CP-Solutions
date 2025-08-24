// A. Homework Codeforces
// Problem link : http://codeforces.com/contest/2132/problem/A

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    int n, m;
    string a, b, c;
    cin >> n;
    cin >> a;
    cin >> m;
    cin >> b;
    cin >> c;

    deque<char> d(a.begin(), a.end());
    for(int i=0; i<m; i++){
        if(c[i] == 'V') d.push_front(b[i]);
        else d.push_back(b[i]);
    }
    string ans = "";
    while(!d.empty()){
        ans += d.front(); 
        d.pop_front();
    }
    cout << ans << endl;
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
