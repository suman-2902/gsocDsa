 class Solution {
public:
    vector<vector<int>> Ans;
    void recur(vector<int>&A, int i, int curSum, int target, vector<int>&X){
        if(curSum>=target || i == A.size()){
            if(curSum== target){
                Ans.push_back(X);
            }
            return;
        }
        
        
        recur(A,i+1,curSum,target,X);
        
    
        X.push_back(A[i]);
        
        recur(A,i, curSum+A[i],target, X);
        X.pop_back();
        
    }
    vector<vector<int>> combinationSum(vector<int>& A, int target) {
        vector<int>X;
        recur(A,0,0,target,X);
            return Ans;
    }
};
