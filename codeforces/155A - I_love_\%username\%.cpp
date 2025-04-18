#include<bits/stdc++.h>
using namespace std;

int main(){
        int n;
        cin >> n;
        int arr[n];
        int b(0), g(0);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        int m = arr[0];
        int s = arr[0];
        for(int i=1; i<n; i++){
            if(m<arr[i]){
                m = arr[i];
                g++;
            }
            if(s>arr[i]){
                s = arr[i];
                b++;
            }
        }
        cout << b + g << endl;

    return 0;
}
