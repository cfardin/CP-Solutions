// Codeforces problem : 1343B - Balanced Array 
// Problem link : https://codeforces.com/problemset/problem/1343/B

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int sum(0);
        if((n/2)%2!=0) cout << "NO" << "\n";
        else{
            cout << "YES\n";
            int even = 2;
            for(int i=0; i<n/2; i++){
                cout << even << " ";
                sum+= even;
                even += 2;
            }
            int odd = 1;
            for(int i=1; i<n/2; i++){
                cout << odd << " ";
                sum -= odd;
                odd+= 2;
            }
            cout << sum << "\n";
        }
    }

    return 0;
}

