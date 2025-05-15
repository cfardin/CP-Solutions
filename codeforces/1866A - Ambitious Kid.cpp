#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
    ios::sync_with_stdio(false);
    int n; cin >> n;
    vector<int> v;
    for(int i=0; i<n; i++){
        int num;
        cin >> num;
        if(num < 0) v.push_back(num * -1);
        else v.push_back(num);
    }
    cout << *min_element(v.begin(), v.end()) << "\n";

    return 0;

}

