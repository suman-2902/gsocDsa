 class Solution {
public:
    int countPairs(vector<int>& deliciousness) {
        unordered_map<int,long long>mp;
        int n=deliciousness.size(), mod=1e9+7;
        long long res=0;
        for(int s:deliciousness)
        {
            for(int i=0; i<=21; i++)
            {
                int t=1<<i;
                if(mp.find(t-s)!=mp.end())
                {
                    res+=mp[t-s];
                }
            }
            mp[s]++;
        }
        return res%mod;
    }
};
