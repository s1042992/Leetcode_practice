class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxarea=0, l=0, r=height.size()-1;
        while(l<r)
        {
            maxarea = max(maxarea, min(height[l],height[r])*(r-l));
            height[l]<height[r] ? l++: r--;
            
        }
        return maxarea;
    }
};