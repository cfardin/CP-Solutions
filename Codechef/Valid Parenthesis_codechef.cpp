// Codechef stack problem : Valid Parenthesis, difficulty : 1100
// Problem link : https://www.codechef.com/practice/course/stacks-and-queues/STAQUEF/problems/PREP59?tab=statement

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool is_valid(string s){
    stack<char> p;
    for(int i=0; i<s.length(); i++){
        if(s[i]== '(') p.push(s[i]);
        else if(s[i]== ')'){
            if(p.empty()) return false;
            p.pop();
        }

    }
    return p.empty();
}

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        cout << (is_valid(s) ? 1 : 0) << endl;
    }
    return 0;
}
