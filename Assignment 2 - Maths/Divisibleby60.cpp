int Solution::divisibleBy60(vector<int> &A) {
    //last digit has to be 0 // divide by 6*10
    // remaining number has to be divided by 6 => second last digit has to be {0,2,4,6,8}
    // sum of all digits have to be divisible by 3
    int sum=0;
    int count_zero=0;
    int count_evenDigit=0;
    for(int i=0;i<A.size();i++){
        sum+=A[i];
        if(A[i]==0){
            count_zero++;
        }
        else if(A[i]%2==0) count_evenDigit++;
    }
    return count_zero>0 && sum%3==0 && (count_evenDigit>0 || count_zero>1);
}
