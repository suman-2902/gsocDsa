vector<int> countingSort(vector<int> arr) {
    
    int n=arr.size();
    vector<int> count(100,0);
    for(int i=0;i<n;i++){
        count[arr[i]]++;
    }
    vector<int> c(n);
    int k=0;
    for(int i=0;i<100;i++){
        while(count[i]!=0){
           c[k]= i;
           k++;
           count[i]--;
        }
    }
    return c;

}
