class Solution(object):
    def subarraySum(self, nums, k):
        n=len(nums)
        mpp={}
        sums=0
        cnt=0
        mpp[0]=1
        for i in range (n):
            sums+=nums[i]
            diff=sums-k
            if diff in mpp:
                cnt+=mpp[diff]
            if sums in mpp:
                mpp[sums]+=1
            else:
                mpp[sums]=1
        return cnt
        