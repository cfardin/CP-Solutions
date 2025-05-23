// Activity selection type problem from CSES.fi (CSES problem name : Movie Festival) 
// Problem link : https://cses.fi/problemset/task/1629/ 

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


bool cmp(pair<int, int> &a, pair<int, int> &b){ 
    return a.second < b.second;
}

int main(){
    ios::sync_with_stdio(false);
    int n; cin >> n;
    vector<pair<int, int>> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i].first >> v[i].second;
    }
    sort(v.begin(), v.end(), cmp);
    int ans = 1;
    int finish = v[0].second;
    for(int i=0; i<n-1; i++){
        int start = v[i + 1].first;
        if(start >= finish){
            ans++;
            finish = v[i+1].second;
        }
    }
    cout << ans << "\n";
    return 0;
}

/*
Input:
3
3 5
4 9
5 8
Output:
2
*/
