class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int>:: iterator iter = unique(nums.begin(),nums.end());
        nums.erase(iter, nums.end());
        return nums.size();
        
    }
};