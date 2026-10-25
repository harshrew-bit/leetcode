class Solution(object):
    def longestConsecutive(self, nums):
        n=len(nums)
        st= set(nums)
        mai=-1
        for i in st:
            if i-1 not in st:
                cnt=0
                y=i
                while y+1 in st:
                    cnt+=1
                    y+=1
                mai=max(mai,cnt)
        return mai+1
        