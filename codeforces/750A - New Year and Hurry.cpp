#include<bits/stdc++.h>
typedef long long ll;
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    int n, k;
    cin >> n >> k;
    int t = (240 - k), c(0), cp(0);
    /// cp = numbers of problem that can be solved in time

    for(int i=1; i<=n; i++){
        int mins = i * 5;
        c+= mins;
        if(c > t) break;
        else cp++;


    }

    cout << cp << endl;

}
