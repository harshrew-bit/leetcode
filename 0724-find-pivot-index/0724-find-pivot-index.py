class Solution(object):
    def pivotIndex(self, nums):
        n= len(nums)
        ts=0
        for i in nums:
            ts+=i
        sl=0
        for i in range (n):
            sr=ts-sl-nums[i]
            if sr==sl:
                return i
            sl+=nums[i]
        return -1
        