class Solution(object):
    def maxArea(self, height):
        n= len(height)
        l,r=0,n-1
        maxi=-1
        while(l<r):
            area=(min(height[l],height[r])*(r-l))
            maxi=max(maxi,area)
            if height[l]<=height[r] :
                l=l+1
            else:
                r=r-1
        return maxi
        