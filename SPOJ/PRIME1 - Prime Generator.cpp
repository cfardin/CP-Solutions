//PRIME1 - Prime Generator
#include <bits/stdc++.h>
using namespace std;
 
int p(int n){
    if(n<=1) return 0;
    for(int i=2; i*i  <= n; i++){
        if(n%i==0) return 0;
    }
    return 1;
}
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        for(int i=a; i<=b; i++){
            if(p(i)==1)cout << i << endl;
        }
    }
    return 0;
}
