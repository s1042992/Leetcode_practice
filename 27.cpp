class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int>:: iterator iter;
        for(iter=nums.begin();iter!=nums.end();)
        {
            if(*iter==val)
                nums.erase(iter);
            else
                iter++;
        }
        return nums.size();
    }
};