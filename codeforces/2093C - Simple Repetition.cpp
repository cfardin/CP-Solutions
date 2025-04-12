#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

bool prime_checker(ll x){
    if(x<=1) return false;
    for(int i=2; i * i <=x; i++){
        if(x%i==0) return false;
    }
    return true;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int x;
        int k;
        cin >> x >> k;
        ll n = x;
        for(int i=1; i<k; i++){
            n = n * 10;
            n += x;
        }

        if(prime_checker(n)) cout << "yes" << endl;
        else cout << "no" << endl;
    }

    return 0;
}
