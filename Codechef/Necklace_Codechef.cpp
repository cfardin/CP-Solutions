// Codechef problem - Necklace (800)
// Problem link https://www.codechef.com/practice/course/stacks-and-queues/STAQUEF/problems/NEC?tab=statement

#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

 int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        k %= a.size();
        vector<int> b;
        for(int i=k; i<a.size(); i++){
            b.push_back(a[i]);
        }

        for(int i=0; i<k; i++){
            b.push_back(a[i]);
        }

        for(int i: b){
            cout << i << " ";
        }
        cout << endl;
    }
 }
