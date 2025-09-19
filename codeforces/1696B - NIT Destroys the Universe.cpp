// 1696B - NIT Destroys the Universe Codeforces
// https://codeforces.com/problemset/problem/1696/B

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){ 
    int n; cin >> n;
    vector<int> a(n);
    int zeros = 0, nums = 0;
    for(int i=0; i<n; i++){
        cin >> a[i];
        if(a[i] == 0) zeros++;
        else nums++;
    }
    bool found_0 = false;
    int l = 0;
    int r = n-1;
    while(a[l] == 0){
        l++;
    }
    while(a[r] == 0){
        r--;
    }
    for(int i=l; i<= r; i++){
        if(a[i] == 0) found_0 = true;
    }
    if(zeros == n){
        cout << 0 << endl;
    }
    else if(found_0 == true){
        cout << 2 << endl;
    }
    else cout << 1 << endl;
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
