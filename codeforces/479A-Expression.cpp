// Problem link : https://codeforces.com/problemset/problem/479/A
// Problem Difficulty : 1000
#include<bits/stdc++.h>
#include<cmath>
using namespace std;
 
int main(){
    int a, b, c;
    cin >> a >> b >> c;
    int num1, num2, num3, num4, num5;
    num1 = a + b * c;
    num2 = a * (b + c);
    num3 = (a + b) * c;
    num4 = a * b * c;
    num5 = a + b + c;
 
    int lol = max({num1, num2, num3, num4, num5});
    cout << lol << endl;
    return 0;
}

