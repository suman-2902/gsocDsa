 #include<vector>
using namespace std;

class Solution {
public:
  
    int find_peak(vector<int> v) {
	int s = 0, n = v.size() - 1;
	int mid=(s + n) / 2;
	while (s < n)
	{
		if(v[mid] < v[mid+1])
     			s=mid+1;
    		else
      			n = mid;
    
		mid = (s + n) / 2;
	}
	return s;
    }
    int peakIndexInMountainArray(vector<int>& arr) {
        return find_peak(arr);
    }
};
