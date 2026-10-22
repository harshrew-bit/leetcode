class Solution(object):
    def majorityElement(self, nums):
        n= len(nums)
        cnt=0
        maxi=-1
        x=0
        for i in range (n):
            if cnt==0:
                x=nums[i]
            if nums[i]==x:
                cnt+=1
            else:
                cnt-=1
        return x
             
        