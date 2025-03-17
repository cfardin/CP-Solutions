#include<bits/stdc++.h>
using namespace std;

using ll = long long;

bool odd_d(ll n){
    if(n % 2 !=0) return true;

    while(n % 2 ==0){
        n/=2;
    }
    if(n > 1) return true;
    else return false;
}

int main(){
    int  t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;

        if(odd_d(n))cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}
