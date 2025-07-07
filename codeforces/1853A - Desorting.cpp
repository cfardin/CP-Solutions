// Codeforces 1853A - Desorting
// Problem link : https://codeforces.com/problemset/problem/1853/A

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool is_sorted(vector<int> &v, int n){
    for(int i=1; i<n; i++){
        if(v[i-1] > v[i]) return false;
    }
    return true;
}

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }
        int d = 1e9;
        if(is_sorted(v, n)){
            for(int i=0; i<n; i++){
                if(i > 0)
                d = min(v[i] - v[i - 1], d);
            }

            cout << d/2 + 1 << endl;
        }
        else cout << 0 << endl;

    }
}

