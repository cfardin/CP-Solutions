// Static Range Sum Queries CSES
// Problem link : https://cses.fi/problemset/task/1646/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, q; cin >> n >> q;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    vector<long long> p(n + 1, 0);

    for(int i=1; i<=n; i++){
        p[i] = p[i-1] + arr[i-1];
    }

     while(q--){
        int x, y; cin >> x >> y;
        cout << p[y] - p[x-1] << endl; 
     }
    
}
