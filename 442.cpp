class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> dump;
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]==nums[i-1])
                dump.push_back(nums[i]);
        }
        return dump;
    }
};