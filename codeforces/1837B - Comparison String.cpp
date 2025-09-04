// 1837B - Comparison String Codeforces
// Problem link : https://codeforces.com/problemset/problem/1837/B

    #include <bits/stdc++.h>
    using namespace std;
    typedef long long ll;

    void solve(){
        int n; cin >> n;
        string s; cin >> s;
        int x(0), y(0);
        int ans1(0), ans2(0); 
        for(int i=0; i<n; i++){
            if(s[i] == '<'){
                x++;
                ans1 = max(ans1, x);
            }
            else{
                x = 0;
            }
        }
        for(int i=0; i<n; i++){
            if(s[i] == '>'){
                y++;
                ans2 = max(ans2, y);
            }
            else{
                
                y = 0;
            }
        }
        cout << max(ans1, ans2) + 1 << endl;
    }

    int main() {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        int t;
        cin >> t;
        while(t--){
            solve();
        }
        return 0;
    }
