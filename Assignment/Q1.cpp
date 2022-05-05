 class Solution {
public:
    int countPrimes(int n) {
        if(n==1 or n==0) 
            return 0;
        vector<int>ar(n+1,0);
        
        for(int i=2;i*i<=n;i++){
            if(ar[i]==0){
                for(int j=i;j*i<=n;j++){
                    ar[i*j]=1;
                }
            }
        }
        int result=0;
        for(int i=2;i<n;i++){
            if(ar[i]==0){
                result++;
            }
        }
        return result;
    }
};
