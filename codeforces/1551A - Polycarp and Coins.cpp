// Codeforces Problem : 1551A - Polycarp and Coins
// Problem link : https://codeforces.com/problemset/problem/1551/A

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        int n; cin >> n;
        int c1, c2;
        c1 = n/3;
        c2 = c1;
        if(n % 3 == 1) c1 += 1;
        else if(n%3 == 2) c2 += 1;
        cout << c1 << " " << c2 << "\n";

    }
  return 0;
}

