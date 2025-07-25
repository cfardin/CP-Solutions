// 1352B - Same Parity Summands Codeforces 1200
// Problem link : https://codeforces.com/problemset/problem/1352/B

    #include<bits/stdc++.h>
    using namespace std;
    typedef long long ll;


    void solve(){
        int n, k; cin >> n >> k;

        // check if k is 1 or not
        if(n < k) cout << "NO\n";
        else if(k == 1){
            cout << "YES\n"; 
            cout << n << endl;
        }
        else{
            /// check if n is even or not
            if(n%2==0){
                if(k % 2 == 0){
                cout << "YES\n";
                for(int i=0; i<k-1; i++){
                    cout << 1 << " ";
                }
                cout << n - (k - 1) << endl;
                }
                else if(k*2 <= n){
                    cout << "YES\n";
                    ll sum(0);
                    for(int i=0; i<k-1; i++){
                        cout <<  2 << " ";
                    }
                    cout << n - (k - 1)*2 << endl;
                }
                /// if n is not even , check k is even or not
                
                else cout << "NO\n";
            }
            else{
                // if n is odd , check k is odd or not
                if(k & 1){
                    cout << "YES\n";
                    for(int i=0; i<k-1; i++){
                        cout << 1 << " ";
                    }
                    cout << n - (k-1) << endl;
                }
                else cout << "NO\n";
            }
        }
    }

    int main(){
        ios :: sync_with_stdio(false);
        cin.tie(0);
        int t; cin >> t;
        while(t--){
            solve();
        }
        return 0;
    }
