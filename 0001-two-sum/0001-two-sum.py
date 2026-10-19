class Solution(object):
    def twoSum(self, nums, target):
        n=len(nums)
        mpp={}
        diff=0
        for i in range (n):
            diff=target-nums[i]
            if diff in mpp:
                return [mpp[diff],i]
            mpp[nums[i]]=i
        return {}
        