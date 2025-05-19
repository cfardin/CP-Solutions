// Codechef problem : Necklace 
// Problem link : https://www.codechef.com/practice/course/stacks-and-queues/STAQUEF/problems/NEC?tab=statement

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        for(int i=0; i<n; i++){
            cout << a[(i + k) % n] << " ";
        }
        cout << "\n";

    }
}

