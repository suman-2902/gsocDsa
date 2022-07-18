class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
      int n = nums.size();
    sort(nums.begin(),nums.end());
        return nums[n-k];
    }
    int main(){
      int n;
        cin >> n;
        vector<int>nums;
        for(int i=0 ; i<n;i++){
            cin >> nums[i];
        }
         int k;
        cin >> k;
        cout << findKthLargest(nums, k);
        return 0;
    }      
};
