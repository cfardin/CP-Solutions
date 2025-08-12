// Group Anagrams Leetcode;
// Problem link : https://leetcode.com/problems/group-anagrams/description/

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> m;
        for(string x : strs){
            string w = x;
            sort(w.begin(), w.end());
            m[w].push_back(x);
        }
        vector<vector<string>> v;
        for(auto i : m){
            v.push_back(i.second);
        }
        return v;
    }
};
