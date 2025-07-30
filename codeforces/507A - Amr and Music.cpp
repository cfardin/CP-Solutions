// 507A - Amr and Music Codeforces 
// https://codeforces.com/contest/507/problem/A

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main(){
    ios :: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, k; cin >> n >> k;
    vector<int> a(n);
    for(int &i : a){
        cin >> i;
    }
    vector<pair<int, int>> v;
    for(int i=0; i<n; i++){
        v.push_back({a[i], i+1});
    }
    sort(v.begin(), v.end());

    vector<int> v2;
    int i(0), c(0);
    for(auto i : v){
        k -= i.first;
        if(k < 0) break;
        v2.push_back(i.second);
    }
    cout << v2.size() << endl;
    for(int i : v2){
        cout << i << " ";
    }
    cout << endl;

}
