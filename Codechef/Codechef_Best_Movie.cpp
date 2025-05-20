// Codechef_Best_Movie
// Problem link : https://www.codechef.com/problems/BESTMOVIE?tab=statement


#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        int n; cin >> n;
        int cost = INT_MAX;
        bool movie = false;
        for(int i=0; i<n; i++){
            int r, p;
            cin >> r >> p;
            if(r >= 7){
                movie = true;
                cost = min(cost, p);
            }
        }
        if(movie) cout << cost << "\n";
        else cout << -1 << "\n";
    }

    return 0;
}



