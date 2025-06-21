// CSES : Increasing Array
// Problem link : https://cses.fi/problemset/task/1094/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n; cin >> n;
    vector<int> v(n);
    ll c(0);
    for(int i=0; i<n; i++) cin >> v[i];
    for(int i=1; i<n; i++){
        if(v[i] >= v[i-1]) continue;
        else{
            int num = abs(v[i] - v[i-1]);
            c+= num;
            v[i]+= num;
        }
    }
    cout << c << endl;
    return 0;
}
