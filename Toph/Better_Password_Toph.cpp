// Toph - Better Password . 
// problem link  : https://toph.co/p/better-passwords

#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

 int main(){
      string s;
     cin >> s;
     for(int i=0; i<s.length(); i++){
        if(s[i]== 's'){
            cout << '$';
        }
        else if(s[i]=='i'){
            cout << '!';
        }
        else if(s[i]=='o'){
            cout << "()";
        }
        else{
            if(i== 0 && isalpha(s[i])){
                s[i] = toupper(s[i]);
            }
            cout << s[i];
        }
     }
    cout << '.';
 }
