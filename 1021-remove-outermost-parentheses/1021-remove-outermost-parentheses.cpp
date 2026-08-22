class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans="";
    int n = s.size();
    stack<char>st;
    for(char c:s){
        if(c=='('){
            if(!st.empty()){
                ans+='(';
            }
            st.push('(');
        }
        else{
            st.pop();
            if(!st.empty()){
                ans+=')';
            }

        }
    }
    return ans;
    }
};