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
        for(auto &c : s){
            c = tolower(c);
        }
        if(s[0]== 'y' && s[1]=='e' && s[2]=='s')
            cout << "YES\n";
        else cout << "NO\n";
    }
}
