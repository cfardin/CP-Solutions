// 1474B - Different Divisors Codeforces
// Problem link : https://codeforces.com/problemset/problem/1474/B

    #include <bits/stdc++.h>
    using namespace std;
    typedef long long ll;


    ll next_prime(ll num){
        for(ll i = num;; i++){
            bool is_prime = true;
            for(ll j = 2; j*j <= i; j++){
                if(i % j == 0){
                    is_prime = false;
                    break;
                }
            }
            if(is_prime){
                return i;
            }
        }
    }

    void solve(){
        ll d; cin >> d;
        ll p = next_prime(d+1);
        ll q = next_prime(p + d);

        cout << min(1ll * p * p * p , 1ll * p * q) << "\n";
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
