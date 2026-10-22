class Solution(object):
    def zeroFilledSubarray(self, nums):
        n=len(nums)
        cnt=0
        ans=0
        for i in range(n):
            if nums[i]==0:
                cnt+=1
                ans+=cnt
            else:
                cnt=0
        return ans
        