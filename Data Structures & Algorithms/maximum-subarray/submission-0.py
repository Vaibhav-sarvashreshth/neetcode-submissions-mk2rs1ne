class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        c_max = 0
        ans = nums[0]

        for num in nums:
            c_max = c_max + num
            ans = max(ans , c_max)
            if c_max <0:
                c_max=0
        
        return ans
        