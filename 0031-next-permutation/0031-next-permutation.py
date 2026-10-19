class Solution(object):
    def nextPermutation(self, nums):
        n=len(nums)
        x=-1
        for i in range (n-2,-1,-1):
            if nums[i]<nums[i+1] :
                x=i
                break
        if x == -1:
            nums.reverse()
            return
        for i in range (n-1,x,-1):
            if nums[i]>nums[x]:
                nums[i],nums[x]=nums[x],nums[i]
                break
        nums[x+1:]=nums[x+1:][::-1]