class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<double> vec3;
        vec3.insert(vec3.end(),nums1.begin(),nums1.end());
        vec3.insert(vec3.end(),nums2.begin(),nums2.end());
        sort(vec3.begin(),vec3.end());
        if(vec3.size()%2==0)
            return ((vec3[vec3.size()/2-1]+vec3[vec3.size()/2])/2.0);
        else
            return vec3[vec3.size()/2];
    }
};