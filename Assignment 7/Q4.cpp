int runningTime(vector<int> arr) {
     int num, j, shift = 0;
    for (int i = 1; i < arr.size(); i++) {
        num = arr[i], j = i - 1;
        while (j >= 0 && arr[j] > num) {
            arr[j + 1] = arr[j];
            ++shift;
            --j;
        }
        arr[j + 1] = num;
    }
    return shift;

}
