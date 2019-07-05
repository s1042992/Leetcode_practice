class Solution {
public:
    int search(vector<int>& nums, int target) {
        vector<int>::iterator it = find(nums.begin(), nums.end(), target);
        if(it!=nums.end())
		{
			int index = std::distance(nums.begin(), it);
            return index;
        }
		else
            return -1;
    }
};