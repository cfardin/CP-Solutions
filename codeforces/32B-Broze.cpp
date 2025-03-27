// Codeforces - 32B Brozo (800)
// Problem link : https://codeforces.com/problemset/problem/32/B
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;


 int main(){
    string s, o;
    getline(cin, s);

    for(int i=0; i<s.length(); i++){
        if(s[i]== '.') o+= '0';
        if(s[i]=='-' && s[i+1]== '.'){
            o+= '1';
            i++;
        }
        if(s[i]=='-' && s[i+1]=='-'){
            o+= '2';
            i++;
        }
    }

    cout << o << endl;

 }
