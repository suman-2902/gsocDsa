 class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low=0 ,high=nums.size(),mid,ans;
        while(low<high)
        {
            mid = (low+high)/2;
            if(nums[mid]<target)
            {
                low = mid+1;
                ans= mid+1;
                
            }
            else if(nums[mid]>target)
            { high = mid;
             
            }
            else
                return mid;
        }
        return ans;
    }
};
