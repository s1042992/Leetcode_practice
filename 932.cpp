class Solution {
public:
    int minIncrementForUnique(vector<int>& A) {
        int size=A.size();
        if(size==0) return 0;
        sort(A.begin(),A.end());
        int temp=A[0];
        int total=0;
        for(int i=1;i<size;i++)
        {
            if(A[i]<=temp)
            {
                temp++;
                total+=temp-A[i];
            }
            else
                temp=A[i];
        }
        return total;
        
    }
};