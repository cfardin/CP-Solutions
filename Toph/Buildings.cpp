// Buildings Toph (binary search porblem)
// Problem link : https://toph.co/p/buildings

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool check(vector<int> &v, int n, int k, ll mid){
    ll tk = 0;
    for(int i=0; i<n; i++){
        if(v[i] < mid) tk += mid - v[i];
    }

    if(tk <= k) return true;
    else return false;
}

int main(){
    ios::sync_with_stdio(false);    
    int n, k; cin >> n >> k;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin >> v[i];

  //  sort(v.begin(), v.end());

    ll l = *min_element(v.begin(), v.end());
    ll h = *max_element(v.begin(), v.end()) + k, ans = 0;

    while(l <= h){
        ll mid = l + (h - l)/2;

        if(check(v, n, k, mid)){
            ans = mid;
            l = mid + 1;
        }
        else h = mid - 1;
    }

    cout << ans << endl; 

    return 0;
}

