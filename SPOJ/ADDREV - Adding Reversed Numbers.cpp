//ADDREV - Adding Reversed Numbers
#include <bits/stdc++.h>
using namespace std;
 
int r(int n){
    int num, rev(0);
    while(n!=0){
        num = n%10;
        rev = rev * 10 + num;
        n/=10;
    }
    return rev;
}
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        int sum = r(a) + r(b);
 
        cout << r(sum) << endl;
    }
 
    return 0;
}
