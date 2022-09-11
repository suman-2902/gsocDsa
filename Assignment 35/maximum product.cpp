 class Solution {
    void count(vector<int>&A)
    {
        vector<int>C(1001);
        for(int i=0;i<A.size();i++)
        {
            C[A[i]]++;
        }
        vector<int>B(A.size());
        int j=0;
        for(int i=0;i<C.size();i++)
        {
            while(C[i]!=0)
            {
                B[j++]=i;
                C[i]--;
            }
        }
        for(int i=0;i<A.size();i++)
        {
            A[i]=B[i];
        }
    }
public:
    int maxProduct(vector<int>& nums) {
       
        int n= nums.size()-1;
       count(nums);
        return(nums[n]-1)*(nums[n-1]-1) ;
    }
};
