// Codeforces : 1971B - Different String
// Problem link : https://codeforces.com/contest/1971/problem/B

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){

    ios :: sync_with_stdio(false);
  //  cin.tie(0);
    int t; cin >> t;
    while(t--){
        string s, r = "";
        cin >> s;
        set<char> st;
        for(int i=0; i<s.size(); i++){
            char ch; ch = s[i];
            st.insert(ch);
        }
        if(st.size() == 1) cout << "NO\n";
        else{
            next_permutation(s.begin(), s.end()); /// will change it to the next parmuttion 
            cout << "YES\n";
            cout << s << endl;
        }
    }

    return 0;
}
