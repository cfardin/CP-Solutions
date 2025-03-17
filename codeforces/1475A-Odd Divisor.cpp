#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void odd_d(ll n){
    if(n & (n-1)) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main(){
    int  t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;

        odd_d(n);
    }

    return 0;
}
