class Solution {
private:
	vector<int> orig; //存原本的
	vector<int> suff; //存亂序的
public:
    Solution(vector<int>& nums) {
        orig=nums;
		suff=nums;
    }
    
    /** Resets the array to its original configuration and return it. */
    vector<int> reset() {
		return orig;
        
    }
    
    /** Returns a random shuffling of the array. */
    vector<int> shuffle() {
		random_shuffle(suff.begin(),suff.end());
		return suff;
        
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */