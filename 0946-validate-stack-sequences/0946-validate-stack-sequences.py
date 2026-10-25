class Solution(object):
    def validateStackSequences(self, pushed, popped):
        n=len(pushed)
        m=len(popped)
        i=0
        j=0
        st=[]
        while i<n :
            st.append(pushed[i])
            while st and j<m and st[-1]==popped[j]:
                st.pop()
                j+=1
            i+=1
        return len(st)==0
        