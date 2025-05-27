// CSES : Repetitions
// Link : https://cses.fi/problemset/task/1069/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
    ios::sync_with_stdio(false);
    string s; cin >> s;
    int n = s.length(), current(1), clong(1);
    for(int i=1; i<n; i++){
        if(s[i]!=s[i-1]){
            clong = max(clong, current);
            current = 1;
        }
        else{
            current++;
        }
    }
    clong = max(clong, current);
    cout << clong << "\n";
    return 0;
}

