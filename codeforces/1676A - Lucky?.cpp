#include<bits/stdc++.h>
using namespace std;

bool sum(string s){
    int sum1(0), sum2(0);
    for(int i=0; i<3; i++){
        char c = s[i];
        sum1 += (c - '0');
    }
    for(int j = 3; j<6; j++){
        char l = s[j];
        sum2 += (l - '0');
    }
    if(sum1 == sum2) return true;
    else return false;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
            if(sum(s)) cout << "Yes" << endl;
            else cout << "No" << endl;
        }
    return 0;
}
