class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum=0;
        int product=1;
        while(n>0){
            int t=n%10;
            sum=sum+t;
            product= product*t;
            n=n/10;
        }
        return product-sum;
    }
};
