#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        if(s == "bca" || s == "cab") cout << "NO\n";
        else cout << "YES\n";
    }
    return 0;
}

