// Codeforces : 1900A - Cover in Water
// Problem link :https://codeforces.com/problemset/problem/1900/A
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
            bool flag = false;
            int num = 0;
            for(int i=0; i<n; i++){
                if(s[i] == '#') num = 0;
                else if(s[i] == '.'){
                    num++;
                    if(num >=3){
                        flag = true;
                        break;
                    }
                }

            }
            char ch = '.';
            int dot = count(s.begin(), s.end(), ch);
            if(flag){
                cout << 2 << endl;
            }
            else cout << dot << endl;
        }
        return 0;
    }
