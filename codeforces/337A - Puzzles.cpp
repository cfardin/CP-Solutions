// 337A - Puzzles Codeforces 
// Problem link : https://codeforces.com/problemset/problem/337/A

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n, p; cin >> n >> p;
    vector<int> a(p);
    for(int i=0; i<p; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int best = a[n-1]-a[0];
    for(int i=1; i<=p-n; i++){
        best = min(best, a[i+n-1] - a[i]);
    }
    cout << best << "\n";
}
