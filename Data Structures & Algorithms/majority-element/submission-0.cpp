class Solution {
public:
    int majorityElement(vector<int>& nums)
    {
        //Boyer-Moore Voting Algorithm
        int res=0;
        int temp = 0;
        for(int i=0;i<nums.size();i++)
        {
            if(res==0)
            {
                res=0;
                temp=nums[i];
            }

            if(nums[i]==temp)
            {
                res++;
            }
            else
            {
                res--;
            }

        }
        return temp;



        
    }
};