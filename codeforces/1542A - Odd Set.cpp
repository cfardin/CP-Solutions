// Codeforces problem : 1542A - Odd Set
// Problem link : https://codeforces.com/problemset/problem/1542/A

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n*2);
        for(int i=0; i<n*2; i++){
            cin >> a[i];
        }
        int e(0), o(0);
        for(int i=0; i<n*2; i++){
            if(a[i]%2==0) e++;
            else o++;
        }
        if(e == o) cout << "Yes\n";
        else cout << "No\n";

    }
    return 0;
}

