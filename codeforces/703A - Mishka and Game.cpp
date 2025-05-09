#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    int n, m(0), c(0);
    cin >> n;
    while(n--){
        int md, cd;
        cin >> md >> cd;
        if(md > cd) m++;
        else if(cd > md) c++;
        else continue;
    }
    if(m > c) cout << "Mishka\n";
    else if(c > m) cout << "Chris\n";
    else cout << "Friendship is magic!^^\n";
    return 0;
}

