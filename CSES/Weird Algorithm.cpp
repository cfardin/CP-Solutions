// CSES : Weird Algorithm 
// Problem link : https://cses.fi/problemset/task/1068/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    ll n; cin >> n;
    while(n!=1){
        cout << n << " ";
        if(n&1){
            n = n*3 + 1;
        }
        else{
            n=n>>1;
        }
    }
    cout << n;

    return 0;
}

