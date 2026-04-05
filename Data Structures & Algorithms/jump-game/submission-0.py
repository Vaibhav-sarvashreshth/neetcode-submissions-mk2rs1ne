class Solution:
    def canJump(self, nums: List[int]) -> bool:
        req =1
        for i in range(len(nums)-2,-1,-1):
            if nums[i]>=req:
                req=1
            else:
                req+=1
            
        if req>=2:
            return False
        else:
            return True
            
        