// Top K Frequent Elements Leetcode 
// https://leetcode.com/problems/top-k-frequent-elements/description/

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> f;
        for(int x : nums){
            f[x]++;
        }
        vector<pair<int, int>> a;
        for(auto i : f){
            a.push_back({i.second, i.first});
        }
        sort(a.rbegin(), a.rend());
        vector<int> ans;
        for(int i=0; i<k; i++){
            ans.push_back(a[i].second);
        }
        return ans;
    }
};
