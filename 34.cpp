class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        vector<int> arr;
        arr.push_back(-1);
        arr.push_back(-1);
        bool flag=true;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==target&&flag)
            {
                ans.push_back(i);
                flag=false;
            }
            if(nums[i]!=target&&!flag)
            {
                ans.push_back(i-1);
                break;
            }
            if(i==nums.size()-1&&nums[nums.size()-1]==target)
            {
                ans.push_back(nums.size()-1);
            }
               
            
        }
        if(ans.empty())
            return arr;
        else
            return ans;
    }
};