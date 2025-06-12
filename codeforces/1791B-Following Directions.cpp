// Codeforces : 1791 B - Following Directions
//Problem link : https://codeforces.com/contest/1791/problem/B

    #include<bits/stdc++.h>
    using namespace std;
    typedef long long ll;

    int main(){
        ios :: sync_with_stdio(false);
        cin.tie(0);
        int t; cin >> t;
        while(t--){
            int n; cin >> n;
            string s; cin >> s;
            int x(0), y(0);
            bool flag = false;
            for(int i=0; i<n; i++){
                if(s[i] == 'R') x++;
                if(s[i] == 'L') x--;
                if(s[i] == 'U') y++;
                if(s[i] == 'D') y--;

                if(x == 1 && y == 1){
                    flag = true;
                    break;
                }
            }
            if(flag) cout << "YES\n";
            else cout << "NO\n";
        }
        return 0;
    }
