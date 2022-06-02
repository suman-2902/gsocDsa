class Solution {
public:
    typedef unsigned long long ULL;
    int firstBadVersion(ULL n) {
        ULL i, begin=1, end=n;
        
       while(begin<=end){
           
           ULL mid=(begin+end)/2;
           
           if(isBadVersion(mid)==true){
               
               i= mid;
               
               end=mid-1;
               
           }else {
               
               begin=mid+1;
           }
       }
        return i;
        
    }
};
