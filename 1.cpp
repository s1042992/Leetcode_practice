class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int, int> gaga;
        for(int i=0;i<nums.size();i++)
            gaga[nums[i]]=i;
        
        for(int i=0;i<nums.size();i++)
        {
            int left= target-nums[i];
            if(gaga.count(left)&&gaga[left]!=i)
                return {i,gaga[left]};
        }
        return{};
        
    }
};