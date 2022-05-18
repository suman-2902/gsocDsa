 class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int low=0;
        int high=n-1;
        int index=-1;
        for(int i=0;i<n;i++){
            if(low<=high){
                int mid=(low+high)/2;
                if(target==nums[mid]){
                    index=mid;
                }
                 else{
                     if(target<nums[mid]){
                    high=mid-1;
                }
                else{
                    low=mid+1;
                }
                     
                 } 
                
            }
        
        }
        return index;
           
    }
};
