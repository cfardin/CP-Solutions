// Codeforces : 903C - Boxes Packing. 
// using map (dictionary in python) and checking frequency of items 
// Problem link : https://codeforces.com/problemset/problem/903/C
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(0);
    int n; cin >> n;
    map<int, int> mp;
    for(int i=0; i<n; i++){
        int temp; cin >> temp;
        mp[temp]++;
    }
    int mx = INT_MIN;
    for( auto a : mp){
        if(a.second > mx){
            mx = a.second;
        }
    }
    cout << mx << endl;
    return 0;
}

