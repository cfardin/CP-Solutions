// Codeforces Probem 1619A - Square String?
// Problem link : https://codeforces.com/contest/1619/problem/A

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
        int num = s.length();
        if(num % 2 ==0){
            string m = s.substr(0, num/2);
            string n = s.substr(num/2);
            if(m == n)
                cout << "YES\n";
            else cout << "NO\n";
        }
        
        else cout << "NO\n";
    }

    return 0;
}


