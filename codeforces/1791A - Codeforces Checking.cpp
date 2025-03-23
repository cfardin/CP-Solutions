//  1791A - Codeforces Checking
// problem link : https://codeforces.com/problemset/problem/1791/A 
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void check(string s, char c){
    for(char i : s){
        if(i == c){
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        string s = "codefrs";
        char c;
        cin >> c;
        check(s, c);
    }

    return 0;
}

