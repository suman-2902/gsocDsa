 class Solution {
public:
    vector<vector<int>> result;
    
    void permutation(vector<int> &num, int A){
        
        if(A==num.size()) {
            result.push_back(num);
            return;
        }
        else{
            for(int i=A;i<num.size();i++){
                swap(num[i],num[A]);
                permutation(num,A+1);
                swap(num[i],num[A]);
            }
        }
    }
    
    vector<vector<int>> permute(vector<int>& num) {
        permutation(num,0);
        return result;
    }
};
