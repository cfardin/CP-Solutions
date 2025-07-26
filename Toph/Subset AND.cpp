// Subset AND Toph by YouKnowWho
// Problem link : https://toph.co/p/subset-and

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


void solve(){
    int n, k; cin >> n >> k;
    vector<int> a(n);
    for(int &i : a){
        cin >> i;
    }
    int c= -1;
    int flag = false;
    for(int i=0; i<n; i++){
        if(c == -1){
            c = a[i];
        }
        else c &= a[i];

        if(c < k){
            flag = true;
            break;
        }
    }
    if(flag) cout << "YES\n";
    else cout << "NO\n";
}

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
    }
