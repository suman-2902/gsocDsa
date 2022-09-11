 class NumArray {
public:
    vector<int> sum;
    NumArray(vector<int>& a) {
        sum = a;
        for(int i=1;i<a.size();i++){
            sum[i] = sum[i-1]+a[i];
        }
    }
    
    int sumRange(int left, int right) {
        if(left==0) 
            return sum[right];
        return sum[right]-sum[left-1];
    }
};
