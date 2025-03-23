// codeforces problem 466A-Cheap Travel, Difficulty : 1200
// problem link : https://codeforces.com/problemset/problem/466/A
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    if(m*a > b){
        int r = (n%m) * a;
        if(r > b) cout << n/m * b + b << endl;
        else cout << n/m * b + r << endl;
            
    }
    else cout << n * a << endl;


    return 0;
}

