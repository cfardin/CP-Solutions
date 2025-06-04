// codeforces : 4C - Registration System
// problem link : https://codeforces.com/problemset/problem/4/C
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios :: sync_with_stdio(false);
   // cin.tie(0);
    int n; cin >> n;
    map<string,int> v;
    for(int i=0; i<n; i++){
        string s; cin >> s;
        auto it = v.find(s);
        if(it!=v.end()){
            cout << s << v[s] << "\n";
            v[s] += 1;
        }
        else{
            cout << "OK\n";
            v[s] = 1;
        }

    }
    return 0;
}

