// 217. Contains Duplicate Leetcode 
// Problem link : https://leetcode.com/problems/contains-duplicate/description/
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> s; // using unordered_set instent of map because its more faster. map can also be uesd.
        for(int i : nums){
            s.insert(i);
        }
        if(s.size() < nums.size()) return true;
        else return false;
    }
};
