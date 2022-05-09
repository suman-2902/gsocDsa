class Solution {
public:
    int addDigits(int n) {
        while(n > 9){
            int res =0;
            while(n > 0){
                res += n%10;
                n /= 10;
            }
            n = res;
        }

        return n;      
    }
};
