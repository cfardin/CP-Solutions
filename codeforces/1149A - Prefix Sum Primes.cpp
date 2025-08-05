// 1149A - Prefix Sum Primes Codeforces
// Problem link : https://codeforces.com/problemset/problem/1149/A

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
    int n; cin >> n;
    int ones(0), twos(0);
    vector<int> a(n);
    for(int &i : a){
        cin >> i;
        if(i == 1) ones++;
        else twos++;
    }
    if(ones == 0){
        for(int i=0; i<twos; i++){
            cout << 2 << " ";
        }
        cout << "\n";
    } 
    else if(twos == 0){
        for(int i=0; i<ones; i++){
            cout << 1 << " ";
        }
        cout << "\n";
    }
    else{
        cout << "2 1 ";
        for(int i=0; i<twos-1; i++){
            cout << 2 << " ";
        }
        for(int i=0; i<ones-1; i++){
            cout << 1 << " ";
        }
        cout << "\n";
    }
}
