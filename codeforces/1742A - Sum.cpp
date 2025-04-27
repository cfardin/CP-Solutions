#include<bits/stdc++.h>
typedef long long ll;
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        if(a + b == c || a + c == b || c + b == a)
            cout << "YES\n";
        else cout << "NO\n";
    }
}
