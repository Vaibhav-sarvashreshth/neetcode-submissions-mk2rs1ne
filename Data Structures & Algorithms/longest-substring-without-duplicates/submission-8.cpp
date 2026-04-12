class Solution {
public:
    int lengthOfLongestSubstring(string s)
    {
        unordered_map<int , int>mp;
        int ans =0, start=0;

        for(int i=0;i<s.size();i++)
        {
            if(mp.find(s[i]-'0')!=mp.end())
            {


                if(mp[s[i]-'0']>=start)
                {
                    start = mp[s[i]-'0']+1;
                }
                
                
                
            


            }
            ans = max(ans, i-start+1);
            mp[s[i]-'0']=i;
        }
        return ans;
        
    }
};
