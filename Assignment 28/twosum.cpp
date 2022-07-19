class Solution {
public:
    vector<int> twoSum(vector<int>& A, int target) {
       unordered_map<int, int>mp;
        for(int i=0;i<A.size();i++){
            if(mp.find(target-A[i])!=mp.end()){
           return {mp[target-A[i]],i};
            }       
           mp[A[i]]=i;
       } 
        return{};
    }
};
