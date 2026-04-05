class Solution {
public:
    int singleNumber(vector<int>& nums)
    {
        int xor_p = 0;
        for(int i=0;i<nums.size();i++)
        {
            xor_p ^=nums[i];
        }
        return xor_p;
    }
};
