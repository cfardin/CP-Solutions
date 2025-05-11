class Solution {
public:
    bool isValid(string s) {
        stack<char> b;
        for(int i=0; i<s.length(); i++){
            char ch = s[i];
            if(ch == '(' || ch == '{' || ch =='['){
                b.push(ch);
            }
            else{
                if(!b.empty()){
                    if(
                       ch == ')' && b.top() == '(' ||
                       ch == '}' && b.top() == '{' ||
                       ch == ']' && b.top() == '[' )
                       {
                           b.pop();
                       }
                       else return false;
                }
                else return false;
            }
        }
        if(b.empty()) return true;
        return false;
    }
};
