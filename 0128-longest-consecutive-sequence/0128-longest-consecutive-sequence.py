class Solution(object):
    def longestConsecutive(self, nums):
        n= len(nums)
        maxi=-1
        st=set(nums) 
        for i in st:
            if i-1 not in st:
                cnt=0
                x=i
                while x+1 in st:
                    cnt=cnt+1
                    x=x+1
                maxi=max(maxi,cnt)

        return maxi+1