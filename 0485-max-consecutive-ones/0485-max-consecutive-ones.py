class Solution(object):
    def findMaxConsecutiveOnes(self, nums):
        n= len(nums)
        cnt =0
        maxi =0
        for i in range (n):
            if nums[i]==1:
                cnt+=1
            else :
                
                cnt=0
            maxi=max(cnt,maxi)
        return maxi
        