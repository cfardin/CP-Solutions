#include<bits/stdc++.h>
typedef long long ll;
using namespace std;


 int main(){
    int a, b, c ,d;
    cin >> a >> b >> c >> d;
    int m = max({a, b, c, d});

    int arr[] = {a, b, c, d};
    for(int i=0; i<4; i++){
        int n = (m - arr[i]);
        if(n == 0) continue;
        else cout << n << " ";
    }

    return 0;
 }
