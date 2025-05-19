#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(int n){
    int ans = n / 100;
    int left = n%100;

    ans += left/20;
    left %= 20;
    ans += left/10;
    left%= 10;
    ans += left/5;
    left%= 5;
    ans += left/1;

    cout << ans << "\n";
}



int main(){
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    solve(n);
}

