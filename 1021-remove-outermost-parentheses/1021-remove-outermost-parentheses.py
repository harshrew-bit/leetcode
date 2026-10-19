class Solution(object):
    def removeOuterParentheses(self, s):
        ans=""
        n=len(s)
        st=[]
        for i in range (n):
            if s[i]=='(':
                if len(st)>0:
                    ans+=s[i]
                st.append('(')
            else :
                st.pop()
                if len(st)>0:
                    ans+=s[i]
        return ans
                