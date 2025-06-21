//1873C - Target Practice Codeforces
// Problem link : https://codeforces.com/problemset/problem/1873/C


#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int matrix[10][10] = {
    {1,1,1,1,1,1,1,1,1,1},
    {1,2,2,2,2,2,2,2,2,1},
    {1,2,3,3,3,3,3,3,2,1},
    {1,2,3,4,4,4,4,3,2,1},
    {1,2,3,4,5,5,4,3,2,1},
    {1,2,3,4,5,5,4,3,2,1},
    {1,2,3,4,4,4,4,3,2,1},
    {1,2,3,3,3,3,3,3,2,1},
    {1,2,2,2,2,2,2,2,2,1},
    {1,1,1,1,1,1,1,1,1,1},
};

int main(){
    ios :: sync_with_stdio(false);
  //  cin.tie(0);
    int t; cin >> t;
    while(t--){
        char st[10][10];
        int p(0);
        for(int i=0; i<10; i++){
            for(int j=0; j<10; j++){
                cin >> st[i][j];
                if(st[i][j] == 'X'){
                    p += matrix[i][j];
                }
            }
        }
        cout << p << endl;
    }

    return 0;
}
