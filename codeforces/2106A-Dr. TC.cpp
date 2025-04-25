
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
 
 
int main(){
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        int n, num(0);
        cin >> n;
        string s;
        cin >> s;
        for(char c:s){
            if(c == '1'){
                num += (n - 1);
            }
            else num++;
        }
        cout << num << endl;
    }
 
}
