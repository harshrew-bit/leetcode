class Solution(object):
    def evalRPN(self, tokens):
        n=len(tokens)
        st=[]
        for token in tokens:
            if token not in "+-*/":
                st.append(int(token))

            else:
                b=st.pop()
                a=st.pop()
                if token=="+":
                    st.append(a+b)
                elif token=="-":
                    st.append(a-b)
                elif token=="*":
                    st.append(a*b)
                else:
                    if a*b<0:
                        st.append(-(abs(a)//abs(b)))
                    else:
                        st.append(a//b)
        return st[-1]


