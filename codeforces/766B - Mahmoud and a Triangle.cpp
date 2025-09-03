// 766B - Mahmoud and a Triangle Codeforces 
// Problem link : https://codeforces.com/problemset/problem/766/B

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
	ios::sync_with_stdio(false);
	
	int n; cin >> n;
	vector<int> a(n);
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	for(int i=1; i<n-1; i++){
		if(a[i-1] + a[i] > a[i+1]){
			cout<< "YES\n";
			return 0;
		}
	}
	cout << "NO\n";
	return 0;
}
