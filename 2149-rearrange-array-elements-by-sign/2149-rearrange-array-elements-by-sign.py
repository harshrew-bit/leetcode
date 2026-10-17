class Solution(object):
    def rearrangeArray(self, nums):
        n=len(nums)
        x=0
        y=1
        ans=[0]*n
        for i in range (n):
            if nums[i]>=0:
                ans[x]=nums[i]
                x+=2
            else:
                ans[y]=nums[i]
                y+=2
        return ans

        