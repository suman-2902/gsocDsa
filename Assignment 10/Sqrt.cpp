 class Solution {
public:
    int mySqrt(int x) {
        long long int mid,ans =x;
        int high =x,low=0;
        if(x==1)
            return 1;
        if(x==0)
            return 0;
        while(low<high)
        {
            mid=(low+high)/2;
            
            if(mid*mid==x)
                return mid;
            else if(mid*mid<x)
            {   ans= mid;
                low= mid+1;
                
            }
            else if(mid*mid>x)
            {
                high = mid ;
            }
        }
        return ans;
    }
};
