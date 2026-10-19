class Solution(object):
    def sortColors(self, nums):
        n= len(nums)
        l=0
        m=0
        r=n-1
        while r>=m:
            if nums[m]==0:
                nums[l],nums[m]=nums[m],nums[l]
                l+=1
                m+=1
            elif nums[m]==2:
                nums[m],nums[r]=nums[r],nums[m]
                r-=1
            else:
                m+=1            
        return nums