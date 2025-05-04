#include<bits/stdc++.h>
typedef long long ll;
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    int arr[3];
    for(int i=0; i<3; i++){
        cin >> arr[i];
    }
    sort(arr, arr+3);
    cout << arr[2] - arr[0] << endl;

}
