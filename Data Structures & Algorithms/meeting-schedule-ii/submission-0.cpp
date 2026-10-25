/**
 * Definition of Interval:
 * class Interval {
 * public:
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * }
 */

class Solution {
public:
    int minMeetingRooms(vector<Interval>& intervals)
    {

        int ans =0;
        int temp =0;

        vector<pair<int, int>>v;
        for(int i=0;i<intervals.size();i++)
        {
            v.push_back({intervals[i].start,+1});
            v.push_back({intervals[i].end,-1});
        }
        sort(v.begin() , v.end());
        for(int i=0;i<v.size();i++)
        {
            temp+=v[i].second;
            ans = max(temp, ans);

        }
        return ans;
        
    }
};
