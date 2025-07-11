// 1845A - Forbidden Integer Codeforces 
// Problem link : https://codeforces.com/problemset/problem/1845/A

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    int n, k, x; cin >> n >> k >> x;

    if(x != 1){
        cout << "YES\n";
        cout << n << endl;
        for(int i=0; i<n; i++)
            cout << 1 << " ";
        cout << endl;
    }
    else{
        if(k == 1 || (k == 2 && (n%2==1))){
            cout << "NO\n";
        }
        else{
            cout << "YES\n";
            if(n%2==0){
                cout << n/2 << endl;
                for(int i=0; i<n/2; i++){
                    cout << 2 << " ";
                }
                cout << endl;
            }
            else{
                cout << (n - 3) / 2 + 1 << endl;
                for(int i=0; i < (n - 3) / 2 ; i++){
                    cout << 2 << " ";
                }
                cout << 3 << endl;
            }
        }
    }
}

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while(t--){
        solve();
    }

}
