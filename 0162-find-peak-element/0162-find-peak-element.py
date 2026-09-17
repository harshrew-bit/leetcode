class Solution(object):
    def findPeakElement(self, nums):
        n= len(nums)
        l,r=1,n-2
        if n==1:
            return 0
        if nums[0]>nums[l]:
            return 0
        elif nums[n-1]>nums[r]:
            return n-1
        while l<r:
            mid=(l+r)//2
            if nums[mid]>nums[mid-1] and nums[mid]>nums[mid+1]:
                return mid
            elif nums[mid+1]>nums[mid]:
                l=mid+1
            else:
                r= mid-1

        return l

        