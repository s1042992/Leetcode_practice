class Solution {
public:
    int countArrangement(int N) {
        vector<int> arr (N , 0);
        for(int i=0;i<N;i++)
            arr[i]=i+1;
        
        bool flag=true;
        int total=0;
     
        do  //to check if the array is beautiful and count the times
        {
            flag=true;
            for(int i=1;i<=N;i++)
            {
                if((arr[i-1]%i!=0)&&(i%arr[i-1]!=0))
                {
					flag=false;
                    break;
                }
               
            }
            if(flag)
                total++;
        }while(next_permutation(arr.begin(),arr.end())); //to find another seq
        
        return total;
    }
};