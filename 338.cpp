class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> ans= vector<int>(num+1,0);
        for(int k=1;k<=num;k++)
        {
            ans[k]=ans[k & (k - 1)] + 1;
            
        }
        return ans;
        
    }
};