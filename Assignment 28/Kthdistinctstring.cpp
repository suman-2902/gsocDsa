 class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string, int>mp;
        for (string& target : arr){
            mp[target]++;
        }
        for (string& target : arr){
            if (mp[target] == 1 && --k == 0)
            {
                return target;
            }
        }

    return "";
    }
};
