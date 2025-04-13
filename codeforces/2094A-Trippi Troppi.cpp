#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s, o;
        getline(cin, s);
        o = s[0];
        for(int i=0; i<s.length(); i++){
            if(s[i]== ' ') o+= s[i+1];
        }

        cout << o << endl;
    }
}
