// 1097A - Gennady and a Card Game Codeforces
// Problem link : https://codeforces.com/problemset/problem/1097/A

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main(){
    ios :: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string s; cin >> s;
    vector<string> cards(5);
    for(int i=0; i<5; i++){
        cin >> cards[i];
    }
    bool flag = false;
    for(int i=0; i<5; i++){
        string s1 = cards[i];
        if(s1[0] == s[0] || s1[1] == s[1]){
            flag = true;
            break;
        }
    }
    if(flag) cout << "YES\n";
    else cout << "NO\n";

}
