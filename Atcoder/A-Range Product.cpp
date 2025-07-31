// A - Range Product  - Atcoder 
// Problem link : https://atcoder.jp/contests/agc002/tasks/agc002_a?lang=en
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main(){
    ios :: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int a, b; cin >> a >> b;
    if(a > 0 && b > 0){
        cout << "Positive\n";
    }
    else if(b < 0){
        int c = b - a + 1;
        if(c & 1) cout << "Negative\n";
        else cout << "Positive\n";
    }
    else{
        cout << "Zero\n";
    }

}
