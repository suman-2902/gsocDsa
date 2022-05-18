 class Solution {
public:
    typedef unsigned long long ULL;
    int mySqrt(ULL x) {
        ULL beg=1;
        ULL end=x;
        ULL sqrt=x;
        while(beg<=end){
            ULL mid=(beg+end)/2;
            if(mid*mid==x){
                 return mid;
            }
            else if(mid*mid>x){
                end=mid-1;
            }else{
                sqrt=mid;
                beg=mid+1;
            }
        }
        return sqrt;
        
    }
};
