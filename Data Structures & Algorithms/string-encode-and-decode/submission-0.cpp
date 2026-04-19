class Solution {
public:

    string encode(vector<string>& strs)
    {
        string encoded = "";
        for(string s : strs)
        {
            encoded+=to_string(s.size()) + "#" + s;
        }
        return encoded;

    }

    vector<string> decode(string s)
    {

        int i=0;
        int s_size = s.size();
        vector<string>ans;
        while(i<s_size)
        {
            int j = i;
            while(s[j]!='#')
            {
                j++;
            }

            int len = stoi(s.substr( i , j-i));

            string s_temp = s.substr(j+1 , len);
            ans.push_back(s_temp);
            i = j + len + 1;
        }
        return ans;




    }
};
