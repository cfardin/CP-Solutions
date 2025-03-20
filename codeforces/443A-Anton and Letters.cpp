#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    set<char> alpha;
    getline(cin, s);

    for(int i=0; i<s.length(); i++){
        if(s[i]>='a' && s[i]<='z'){
            alpha.insert(s[i]);
        }
    }
    cout << alpha.size() << endl;

    return 0;
}
