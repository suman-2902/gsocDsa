 class Solution {
public:
    vector<vector<int>> result;
    
    void dfs(vector<int> &nums, int A){
        
        if(A==nums.size()) {
            result.push_back(nums);
            return;
        }
        else{
            for(int i=A;i<nums.size();i++){
                swap(nums[i],nums[A]);
                dfs(nums,A+1);
                swap(nums[i],nums[A]);
            }
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        dfs(nums,0);
        return result;
    }
};
