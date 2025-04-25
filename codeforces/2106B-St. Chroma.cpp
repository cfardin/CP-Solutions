#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
 
 
int main(){
    ios::sync_with_stdio(false);
    int t; cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;
        int arr[n];
        if(x == 0){
            for(int i=1; i<n; i++)
                arr[i-1] = i;
            arr[n-1] = x;
        }
        else if(x == n){
            for(int i=0; i<n; i++)
                arr[i] = i;
        }
        else{
            int i=0;
            for(;i<x; i++)
                arr[i] = i;
            for(int j = x +1; j < n; j++, i++)
                arr[i] = j;
            arr[n-1] = x;
        }
 
        for(int i=0; i<n; i++){
            cout << arr[i] << " ";
        }
 
    }
 
}
