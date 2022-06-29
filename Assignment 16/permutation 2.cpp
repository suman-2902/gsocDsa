 class Solution {
public:
    void rec(int i,vector<int> num, vector<vector<int>> &result){
        if(i>=num.size()){
            result.push_back(num);
            return;
        }
        for(int j=i;j<num.size();j++){
           swap(num[i],num[j]);
            rec(i+1,num,result);
            swap(num[i],num[j]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& num) {
        vector<vector<int>> result;
        int index=0;
        rec(index,num,result);
        sort(result.begin(),result.end());
        result.erase(unique(result.begin(),result.end()),result.end());
        return result;
    }
};
