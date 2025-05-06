#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios::sync_with_stdio(false);
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int drink = (k * l)/nl;
    int lemon = c * d;
    int salt = p / np;

    int tost = min({drink/n, lemon/n, salt/n});
    cout << tost << endl;



}
