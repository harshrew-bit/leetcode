class Solution(object):
    def removeKdigits(self, num, k):
        st=[]
        n=len(num)
        for i in range (n):
            while st and k and st[-1]>num[i]:
                st.pop()
                k-=1
            st.append(num[i])
        while k :
            st.pop()
            k-=1
        ans = ''.join(st)
        ans = ans.lstrip('0')
        return ans or "0"