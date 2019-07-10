class Solution {
public:
    int findMin(vector<int>& nums) {
        int ans=INT_MAX;
        for(int i=0;i<nums.size();i++)
            ans=min(nums[i],ans);
        return ans;
    }
};


peak維持的時間(山腰)
baseline + N = threshold
