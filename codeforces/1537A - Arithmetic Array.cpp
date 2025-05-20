// Codeforces Problem 1537A - Arithmetic Array
// Problem link : https://codeforces.com/problemset/problem/1537/A

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        int n, sum(0);
        cin >> n;
        for(int i=0; i<n; i++){
            int a;
            cin >> a;
            sum += a;
        }
        if(sum < n) cout << 1 << "\n";
        else cout << sum - n << endl;

    }
    return 0;
}

