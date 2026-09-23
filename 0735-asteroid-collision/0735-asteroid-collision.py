class Solution(object):
    def asteroidCollision(self, asteroids):
        st=[]
        n=len(asteroids)
        ans=[]
        for i in range (n):
            while st and st[-1]>0 and asteroids[i]<0 and abs(asteroids[i])> st[-1]:
                st.pop()
            if not st or st[-1]<0 or asteroids[i]>0:
                st.append(asteroids[i])
            elif st[-1]==abs(asteroids[i]):
                st.pop()
        while st:
            ans.append(st[-1])
            st.pop() 
        ans.reverse()
        return ans