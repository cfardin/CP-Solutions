// problem link : https://codeforces.com/problemset/problem/785/A
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    int num(0);
    while(t--){
        string s;
        cin >> s;
        if(s == "Tetrahedron") num += 4;
        else if(s == "Cube") num += 6;
        else if(s == "Octahedron") num += 8;
        else if(s == "Dodecahedron") num += 12;
        else if(s == "Icosahedron") num += 20;
        
        
    }
    cout << num << endl;
    
    return 0;
} 
