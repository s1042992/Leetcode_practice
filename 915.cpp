class Solution {
public:
    int partitionDisjoint(vector<int>& A) {
        int max1=A[0];
        int allmax=A[0];
        int solution = 1;
        for(int i=1;i<A.size();i++)
        {
            if(A[i]<max1)
            {
                solution=i+1;
                max1 = allmax;
                
            }
            else
                allmax=max(allmax,A[i]);
            
        }
        return solution;
    }
};