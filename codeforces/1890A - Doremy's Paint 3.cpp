// Codeforces : 1890A - Doremy's Paint 3
// Problem link : https://codeforces.com/problemset/problem/1890/A

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){

    ios :: sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> v(n);
        for(int i=0; i<n; i++) cin >> v[i];
        map<int , int> mp;
        for(int i=0; i<n; i++){
            mp[v[i]]++;
        }
        if(mp.size()>=3) cout << "NO\n";
        else{
            int num1 = mp.begin() -> second;
            int num2 = mp.rbegin() -> second;
            if(num1 == num2) cout << "YES\n";
            else if(n%2==1 && abs(num1 - num2) == 1) cout << "YES\n";
            else cout << "NO\n";
        }

    }

    return 0;
}
