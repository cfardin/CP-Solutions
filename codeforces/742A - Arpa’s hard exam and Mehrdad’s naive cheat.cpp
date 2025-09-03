// 	742A - Arpa’s hard exam and Mehrdad’s naive cheat Codeforces
// Problem link : https://codeforces.com/problemset/problem/742/A

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll binary_ex_pow(ll a, ll b){
    if(b == 0) return 1;
    if(b == 1) return a;

    ll x = binary_ex_pow(a, b/2);

    ll ans = 0;
    if(b & 1){
        ans = (x*x*a) % 10;
    }
    else ans = (x*x) % 10;

    return ans;
}

int main(){
	ll n; cin >> n;
	cout << binary_ex_pow(8, n) << endl;
	
	return 0;
}
