#include<bits/stdc++.h>
typedef long long ll;
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    string s[n];
    for(int i=0; i<n; i++){
        cin >> s[i];
    }
    int p1(0), p2(0);
    sort(s, s+n);
    string t1 = s[0];
    string t2 = s[n-1];
    for(int i=0; i<n; i++){
        if(s[i]== t1) p1++;
        else p2++;
    }
    if(p1 > p2) cout << t1 << endl;
    else cout << t2 << endl;

}
