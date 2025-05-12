#include<bits/stdc++.h>
using namespace std;
typedef long long ll;



int main(){
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        string s, c = "codeforces";
        cin >> s;
        int num(0);
        for(int i=0; i<s.length(); i++){
            if(s[i] != c[i]) num++;
        }
        cout << num << endl;
    }
}

