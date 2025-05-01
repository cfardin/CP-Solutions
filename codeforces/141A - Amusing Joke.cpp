#include<bits/stdc++.h>
typedef long long ll;
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    string a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;
    a += b;
    for (auto& x : a) {
        x = tolower(x);
    }
    for (auto& y : c) {
        y = tolower(y);
    }
    sort(a.begin(), a.end());
    sort(c.begin(), c.end());


    if(a.length()==c.length()){
        bool o = true;
        for(int i=0; i<c.length(); i++){
        if(c[i]!=a[i]) o = false;
        }
        if(o) cout << "YES\n";
        else cout << "NO\n";
    }
    else cout << "NO\n";



    return 0;
}
