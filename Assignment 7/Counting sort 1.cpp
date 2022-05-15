 vector<int> countingSort(vector<int> arr) 
{
    vector<int> b(100);
    for(int i=0;i<arr.size();i++)
        b[arr[i]]++;
    return b;
}
