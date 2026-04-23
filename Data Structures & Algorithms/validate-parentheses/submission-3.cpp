class Solution {
public:
    bool isValid(string s)
    {
        stack<char>st;
        for(int i=0;i<s.size();i++)
        {
            if(st.empty())
            {
                if(s[i]==')' or s[i]=='}' or s[i]==']')
                {
                    return false;
                }
                
                st.push(s[i]);
            }
            else
            {
                if(st.top()=='(' and s[i]==')' or st.top()=='[' and s[i]==']' or st.top()=='{' and s[i]=='}')
                {
                    st.pop();
                }
                else
                {
                    st.push(s[i]);
                }
            }
        }
        return st.empty();
        
    }
};
