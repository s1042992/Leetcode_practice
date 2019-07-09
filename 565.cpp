class Solution {
public:
    int arrayNesting(vector<int>& nums) {
        int maxx = 0, count;
        for(int i = 0;i < nums.size(); i++)
        {
            count = 1;
            while (nums[i] != i) 
            {
                swap(nums[i], nums[nums[i]]);
                count++;
            }
            maxx=max(maxx,count);
        }
        return maxx;
    }
};