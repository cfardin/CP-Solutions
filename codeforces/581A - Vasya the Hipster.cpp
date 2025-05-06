#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    int a, b;
    cin >> a >> b;
    int f = min(a, b);
    int n = max((a-min(a, b))/2, (b-min(a, b))/2);
    cout << f << " " << n << endl;
}
