#include<bits/stdc++.h>
typedef long long ll;
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        string a, b;
        cin >> a;
        b = a.substr(0, 2);
        for(int i=3;i<=a.length(); i+=2){
            b += a[i];
        }
        cout << b << endl;
    }

}
