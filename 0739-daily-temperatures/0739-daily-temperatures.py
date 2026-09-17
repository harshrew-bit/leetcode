class Solution(object):
    def dailyTemperatures(self, temperatures):
        n=len(temperatures)
        ans=[]
        st=[]
        for i in range (n-1,-1,-1):
            while st and temperatures[st[-1]] <=temperatures[i]:
                st.pop()
            if not st:
                ans.append(0)
            else:
                ans.append(st[-1]-i)
            st.append(i)
        ans.reverse()
        return ans