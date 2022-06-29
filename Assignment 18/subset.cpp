class Solution {
public:
    void recursion(int I, vector<int>& nums,vector<int> &N ,vector<vector<int>> &result){
        
            result.push_back(N);
    
            
        for(int i=I;i<nums.size();i++){
            N.push_back(nums[i]);
            recursion(i+1,nums,N,result);
            
           N.pop_back();
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int>subset;
        int I=0;
        recursion(I,nums,subset,result);
        return result;
    }
};
