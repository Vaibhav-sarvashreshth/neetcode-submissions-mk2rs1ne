class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs)
    {
        /*
        this is the other way of doing this , without sorting make a key by yourself and then push that key, this
        is genuinely a great solution
        */
        unordered_map<string , vector<string>>mp;
        for(int i=0;i<strs.size();i++)
        {
            vector<int>count(26,0);

            for(int j=0;j<strs[i].size();j++)
            {
                count[strs[i][j]-'a']++;
            }

            string temp = "";
            for(int i=0;i<26;i++)
            {
                temp += "#"+to_string(count[i]);
            }
            mp[temp].push_back(strs[i]);
        }
        vector<vector<string>>ans;

        for(auto it : mp)
        {
            ans.push_back(it.second);
        }

        return ans;
        
    }
};
