// Codeforces : 1850B - Ten Words of Wisdom
// Problem link : https://codeforces.com/problemset/problem/1850/B

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    int t; cin >> t;
    while(t--){
        int n;
        cin >> n;
        int best_scor = 0 , winner(-1);
        for(int i=1; i<=n; i++){
            int a, b;
            cin >> a >> b;
            if(b > best_scor && a <= 10){
                winner = i;
                best_scor = b;
            }
        }
        cout << winner << endl;
    }

    return 0;
}

