 class Solution {
public:
    int arrangeCoins(int num) {
        int beg=1;
        
        while(beg<=num){
            
            num=num-beg;
            
            beg++;
        }
        return beg-1;
        
    }
};
