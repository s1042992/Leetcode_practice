class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> ans;
        sort(arr1.begin(),arr1.end());
        unordered_map<int,bool> exist;
        for(int i=0;i<arr1.size();i++)
        {
            exist[arr1[i]]=false;
        }
        int store[1000];
        int k=0,temp=0;
        for(int i=0;i<arr2.size();i++)
        {
            for(int j=temp;j<arr1.size();j++)
            {
                if(arr1[j]==arr2[i])
                {
                    ans.push_back(arr1[j]);
                    exist[arr1[j]]=true;
                }
            }
        }  
        for(int i=0;i<arr1.size();i++)
        {
            if(exist[arr1[i]]==false)
                ans.push_back(arr1[i]);
        }
       
        
        return ans;
    }
    
};