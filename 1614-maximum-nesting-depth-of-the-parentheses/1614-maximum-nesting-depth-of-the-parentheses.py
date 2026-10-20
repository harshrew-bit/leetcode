class Solution(object):
    def maxDepth(self, s):
        n=len(s)
        cnt=0
        maxi=-1
        for i in range (n):
            if s[i]=='(':
                cnt+=1
            elif s[i]==')':
                cnt-=1
            maxi=max(maxi,cnt)
        return maxi
        