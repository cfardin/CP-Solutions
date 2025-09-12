// Find First and Last Position of Element in Sorted Array Leetcode
// Problem link : https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/description/

class Solution {
public:

    int lowerbond(vector<int>& nums, int target){
        int n = nums.size();
        int l = 0, r = n-1;
        int ans = n;
        while(l <= r){
            int mid = l + (r - l) / 2;
            if(nums[mid] >= target){
                ans = min(ans, mid);
                r = mid - 1;
            }
            else{
                l = mid + 1;
            }
        }
        return ans;
    }

    int upperbond(vector<int>& nums, int target){
        int n = nums.size();
        int l = 0, r = n - 1;
        int ans = n;
        while(l <= r){
            int mid = l + (r - l) / 2;
            if(nums[mid] > target){
                ans = min(ans, mid);
                r = mid - 1;
            }
            else l = mid + 1;
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int l = lowerbond(nums, target);
        int u = upperbond(nums, target);

        if(l == u){
            return {-1, -1};
        }
        else return {l, u-1};
    }
};
