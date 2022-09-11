 class Solution {
public:
    int maxSubArray(vector<int>& a) {
        int maxnum = INT_MIN;
        int sum = 0;
        for(auto x : a){
            sum+=x;
            maxnum = max(maxnum,sum);
            if(sum<0){
                sum = 0;
            }
                
        }return maxnum;
    }   
};
