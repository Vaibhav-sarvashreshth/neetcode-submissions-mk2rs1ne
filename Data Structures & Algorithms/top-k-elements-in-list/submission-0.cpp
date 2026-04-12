class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k)
    {
        unordered_map<int , int>mp;
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        vector<int>ans;
        vector<vector<int>>bucket(n+1);

        for(auto& [num, count] : mp)
        {
            bucket[count].push_back(num);
        }
        for(int i=n;i>=1 and ans.size()<k;i--)
        {
            for(int num : bucket[i])
            {
                ans.push_back(num);
                if(ans.size()==k)
                {
                    break;
                }
            }
        }
        return ans;
        
    }
};
