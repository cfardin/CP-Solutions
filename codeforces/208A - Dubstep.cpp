#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    string s;
    cin >> s;
    int n = 1;
    for(int i=0; i<s.length(); i++){
        if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B'){
            i+=2;
            if(!n){
                cout << " ";
            }
            continue;
        } else {
            n = 0;
            cout << s[i];
        }
    }

    return 0;
}
