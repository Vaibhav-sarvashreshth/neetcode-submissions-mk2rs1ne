class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp)
    {
        stack<pair<int , int>>s ;
        stack<pair<int , int>>t;
        for(int i=0;i<temp.size();i++)
        {
            s.push({temp[i],i});
        }
        vector<int>ans;
        // ans.push_back(0);
        while(!s.empty())
        {

            pair<int , int> curr_t = s.top();
            s.pop();
            while(!t.empty() and t.top().first<=curr_t.first)
            {
                t.pop();
            }
            if(t.empty())
            {
                ans.push_back(0);
            }
            else
            {
                ans.push_back(t.top().second-curr_t.second);
            }
            t.push(curr_t);
        }
        reverse(ans.begin() , ans.end());
        return ans;
        
    }
};
