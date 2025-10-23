// Easy Pronunciation Codechef 
// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/EZSPEAK?tab=statement

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
	int t; cin >> t;
	while(t--){
	    int n; cin >> n;
	    string s; cin >> s;
	    int c = 0, ans = 0;
	  
	    for(int i=0; i<n; i++){
	        if(
	            s[i] == 'a' || 
	            s[i] == 'e' ||
	            s[i] == 'i' ||
	            s[i] == 'o' ||
	            s[i] == 'u'
 	            )
 	            c = 0;
 	      else c++;
 	      ans = max(ans, c);
 	          
	    }
	   if(ans >= 4) cout << "NO\n";
	   else cout << "YES\n";
	    
	}

}
