class Solution {
public:
    double myPow(double x, int n) {
       long long N = n;
        if (N < 0) {
            x = 1 / x;
            N = -N;
        }
        double ans = 1;
        double curr_pro = x;
        for (long long i = N; i>0 ; i /= 2) {
            if ((i % 2) == 1) {
                ans = ans * curr_pro;
            }
            curr_pro = curr_pro * curr_pro;
        }
        return ans; 
    }
};
