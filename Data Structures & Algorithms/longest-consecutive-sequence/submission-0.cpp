class Solution {
public:
    int longestConsecutive(vector<int>& nums)
    {
        unordered_set<int>s(nums.begin() , nums.end());
        int ans =0;
        for(int num : s)
        {
            // start from the start of the sequence
            if(s.find(num-1)==s.end())
            {
                int currentNum = num;

                int temp=1;

                while(s.find(currentNum+1)!=s.end())
                {
                    temp++;
                    currentNum++;

                }
                ans = max(ans , temp);
            }
        }
        return ans;
        
    }
};
