// Codeforces : 1520A - Do Not Be Distracted!
// Problem link : https://codeforces.com/problemset/problem/1520/A

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
            string s2 = "";
            for(int i=0; i<n; i++){
                if(s[i] != s[i+1]) s2+= s[i];
            }
          //  cout << s2 << endl;
            bool flag = true;
            for(int i=0; i<s.size(); i++){
                char ch = s2[i];
                int num = count(s2.begin(), s2.end(), ch);
                if(num > 1){
                    flag = false;
                    break;
                }
            }
            if(flag) cout << "YES\n";
            else cout << "NO\n";
        }
        return 0;
    }
