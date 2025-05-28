// Codeforces : 2107B - Apples in Boxes
// Problem link : https://codeforces.com/problemset/problem/2107/B

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
    ios::sync_with_stdio(false);
    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        vector<int> v(n);
        for(int i=0; i<n; i++)
            cin >> v[i];

        ll sum = accumulate(v.begin(), v.end(), 0);
        sort(v.begin(), v.end());
        v[n - 1]--;
        sort(v.begin(), v.end());
        if(v[n-1] - v[0] > k || sum % 2 == 0)
            cout << "Jerry\n";
        else cout << "Tom\n";

    }
    return 0;
}

