class Solution {
public:
    int lengthOfLongestSubstring(string s)
    {
        unordered_map<int , int>mp;
        int ans =0,start_l =0, curr=0;
        for(int i=0;i<s.size();i++)
        {
            if(mp.find(s[i]-'0')!=mp.end())
            {
                start_l = max(start_l , mp[s[i]-'0']+1);
                
                


            }
            mp[s[i]-'0'] = i;
            ans= max(ans , i - start_l + 1);

        }

        return ans;
        
    }
};
