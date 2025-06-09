//Codeforces : 1669B - Triple
// Problem link : https://codeforces.com/contest/1669/problem/B

 #include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios :: sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        map<int, int> mp;
        for(int i=0; i<n; i++){
            int temp; cin >> temp;
            mp[temp]++;
        }
        int num;
        for(auto x : mp){
            if(x.second >= 3){
                num = x.first;
                break;
            }
            else num = -1;
        }
        cout << num << endl;
    }
    return 0;
}

