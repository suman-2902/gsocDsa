vector<int> Solution::allFactors(int n) {
    vector<int>A;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0) A.push_back(i);
    }

    for(int i=A.size()-1;i>=0;i--){
        if(A[i]*A[i]!=n) A.push_back(n/A[i]);
    }
    return A;
}
