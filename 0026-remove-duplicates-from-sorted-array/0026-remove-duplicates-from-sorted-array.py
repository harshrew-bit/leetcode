class Solution(object):
    def removeDuplicates(self, nums):
        n=len(nums)
        j=0
        for i in range (0,n):
           if nums[i]!=nums[j]:
                nums[j+1]=nums[i]
                j+=1
        return j+1

        