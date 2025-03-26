#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

 int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        int num(0);
        vector<int> b = a;
        sort(b.begin(), b.end());
        for(int i=0; i<n; i++){
            if(a[i]!=b[1]) num = i;
        }
        cout << num+1 << endl;
    }
 }
