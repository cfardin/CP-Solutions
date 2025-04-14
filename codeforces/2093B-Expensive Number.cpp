#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int n = s.length(), c(0);
        bool zeros = false;
        for(int i=n-1; i>=0; i--){
            if(s[i]!='0') zeros = true;
            else if(zeros) c++;
        }
        cout << n - (c+1) << endl;
    }

}
