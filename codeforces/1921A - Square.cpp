#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        int x1, y1, x2, y2, x3, y3, x4, y4;
        cin >> x1 >> y1;
        cin >> x2 >> y2;
        cin >> x3 >> y3;
        cin >> x4 >> y4;

        int d =  (max({x1, x2, x3, x4}) - min({x1, x2, x3, x4}));
        cout << d * d << endl;
    }
    return 0;
}

