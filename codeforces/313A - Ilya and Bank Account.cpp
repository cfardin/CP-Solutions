#include<bits/stdc++.h>
using namespace std;
typedef long long ll;



int main(){
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    if(n >=0) cout << n << endl;
    else{
        int last_num = n % 10;
        int del_last = n / 10;
        int del_second = del_last - (del_last % 10) + last_num;

        cout << max(del_last, del_second) << endl;
    }
}

