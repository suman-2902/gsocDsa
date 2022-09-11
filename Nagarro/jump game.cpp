 class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size()-1;
        int target=nums[0];
        if(nums[0]==n)
        {
            return true;
        }
        
       for(int i=0;i<=target;i++)
       {
          if(nums[i]+i>target) {
              target=nums[i]+i;
          }
           if(target>=n)
              return true;
           
       }
        return false;
    }
};
