class Solution(object):
    def backspaceCompare(self, s, t):
        n=len(s)
        m=len(t)
        i=0
        j=0
        st=[]
        st2=[]
        while i<n :   
            if s[i]=='#':
                if st:
                    st.pop()
            else :
                st.append(s[i])
            i+=1
        while j<m:
            if t[j]=='#':
                if st2:
                    st2.pop()
            else :
                st2.append(t[j])
            j+=1
        return st==st2
        