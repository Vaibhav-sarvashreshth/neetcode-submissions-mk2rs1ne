class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums)
    {
        vector<int>ans;
        int n = nums.size();
        vector<int>pre(nums.size(),0);
        vector<int>suff(nums.size(),0);
        if(n==1)
        {
            return {0};
        }

        int p = 1;
        for(int i=0;i<nums.size();i++)
        {
            p*=nums[i];
            pre[i]=p;
        }


        p =1;
        for(int i=n-1;i>=0;i--)
        {
            p *= nums[i];
            suff[i]=p;
        }
        for(int i=0;i<nums.size();i++)
        {
            int temp =1;
            if(i==0)
            {
                temp = suff[i+1];
            }
            else if(i==nums.size()-1)
            {
                temp = pre[i-1];
            }
            else
            {
                temp = pre[i-1]*suff[i+1];
                

            }
            ans.push_back(temp);
            
        }
        return ans;



    }
};
