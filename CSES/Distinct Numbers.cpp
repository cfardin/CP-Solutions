// CSES : Distinct Numbers
// Problem link : https://cses.fi/problemset/task/1621/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
    ios::sync_with_stdio(false);
    int n; cin >> n;
    set<int> s;
    for(int i=0; i<n; i++){
        int num; cin >> num;
        s.insert(num);
    }
    cout << s.size() << "\n";
    return 0;
}

