#include<bits/stdc++.h>
typedef long long ll;
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n >= 38){
            if((n+2)%5 ==0) n += 2;
            else if((n+1)%5==0) n+=1;
        }
        cout << n << endl;
    }
}
