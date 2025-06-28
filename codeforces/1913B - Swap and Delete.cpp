// 1913B - Swap and Delete Codeforces 1000 rating 
// Problem link : https://codeforces.com/problemset/problem/1913/B

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    string s; cin >> s;
    int o(0), z(0);
    for(int i=0; i<s.size(); i++){
        if(s[i]=='1') o++;
        else z++;
    }
    if(o == z){
        cout << 0 << endl;
        return;
    }
    else{
        int i=0;
        while(i <= s.size() && o>=0 && z>=0){
            if(s[i] == '1') z--;
            else o--;

            i++;
        }
    }

    cout << max(o, z) << endl;
   // cout<< '#'  << o << " " << z << endl;
}


int main(){
    ios :: sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while(t--){
        solve();
    }

    return 0;

}
