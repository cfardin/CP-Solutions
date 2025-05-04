#include<bits/stdc++.h>
typedef long long ll;
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        int n, p(1);
        vector<int> arr;
        cin >> n;

        while(n > 0){
            if(n % 10 > 0){
                arr.push_back((n % 10) * p);
            }
            n/=10;
            p*=10;
        }
        cout << arr.size() << endl;
        for(int i : arr){
            cout << i << " ";
        }
    }

}
