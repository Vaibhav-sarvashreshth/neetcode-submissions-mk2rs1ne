class Solution {
public:
    bool isAnagram(string s, string t)
    {
        unordered_map<int,int>v;
        int s_s = s.size();
        int t_s = t.size();
        if(s_s !=t_s)
        {
            return false;
        }
        else
        {
            for(int i=0;i<s_s;i++)
            {
                v[s[i]-'0']++;
            }
            for(int i=0;i<s_s;i++)
            {
                v[t[i]-'0']--;
            }
            for(int i=0;i<s_s;i++)
            {
                if(v[s[i]-'0']!=0)
                {
                    return false;
                }
            }
            return true;
        }
        
    }
};
