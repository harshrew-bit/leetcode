class Solution {
public:
    string decodeString(string s) {
        int n = s.size();
        stack<pair<int,string>>st;
        int num=0;
        string curr="";
        for(char ch : s){
            if(isdigit(ch)){
                num=num*10+(ch-'0');
            }
            else if (ch == '[') {
                st.push({num, curr});
                num = 0;
                curr = "";
            }

            else if( ch==']'){
                auto [k,prev]=st.top();
                st.pop();
                string temp="";
                for(int i=0;i<k;i++){
                    temp+=curr;
                }
                curr=prev+temp;
            }
            else{
                curr+=ch;
            }
        }      
        return curr;
    }
};