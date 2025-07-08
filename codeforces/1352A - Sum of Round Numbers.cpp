#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
void solve(){
    int n; cin >> n;
    int x = n;
    vector<int> a = {10, 100, 1000, 10000};
    vector<int> v;
    for(int i=0; i<4; i++){
        int num = x % a[i];
        x = x - num;
        if(num != 0) v.push_back(num);
    }


    if(v.empty()){
        cout << 1 << endl;
        cout << n;
    }
    else{
        cout << v.size() << endl;
        for(int i : v){
            if(i == 0) continue;
            else cout << i <<" ";
        }
    }
    cout << endl;
 
}
 
int main(){
    ios :: sync_with_stdio(false);
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
