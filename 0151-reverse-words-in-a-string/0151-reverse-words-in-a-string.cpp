class Solution {
public:
    string reverseWords(string s) {
    vector<string> ans;
    string x;
    int n = s.size();
    int i=0;
    while(i<n){
        string temp="";
        while(i<n&&s[i]==' '){
            i++;
        }
        while(i<n&&s[i]!=' '){
            temp+=s[i];
            i++;
        }
        if(!temp.empty()){
            ans.push_back(temp);

        }
    }   
    reverse(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++){
        x+=ans[i];
        if(i!=ans.size()-1){
            x+=' ';
        }
    } 
    return x;
    }
};