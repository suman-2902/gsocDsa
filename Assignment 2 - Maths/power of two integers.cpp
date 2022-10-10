int Solution::isPower(int n) {
    if(n==1) return 1;
    int hcf=0;
    for(int i=2;i<=n;i++){
        int k=0;
        while(n%i==0){
            k++;
            n=n/i;
        }
        if(k>0){
            if(hcf==0) hcf =k;
            else hcf = __gcd(hcf,k);
        }
    }
    return hcf>1;
}
