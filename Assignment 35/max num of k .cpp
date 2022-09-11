 class Solution {
public:
    int maxOperations(vector<int>& num, int k) {
       sort(num.begin(),num.end());
        int i = 0,count = 0;
        int j = num.size()-1;
        while(i<j){
            if(num[i]+num[j]==k){
                count++;
                i++;
                j--;
            }
            else if(num[i] + num[j] > k) j--;
            else i++;
        }
        return count;
    }
};
