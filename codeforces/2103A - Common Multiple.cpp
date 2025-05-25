/// Codeforces problem : 2103A - Common Multiple
/// Problem link : https://codeforces.com/problemset/problem/2103/A

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }
        int c(0);
        for(int i=0; i<n; i++){
            int add(1);
            for(int j=0; j<i; j++){
                if(v[i]==v[j]) add = 0;
            }
            c += add;
        }
        cout << c << "\n";
        
    }

    return 0;
}

