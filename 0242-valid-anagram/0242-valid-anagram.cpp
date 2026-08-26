class Solution {
public:
    bool isAnagram(string s, string t) {
    int n = s.size();
    int m=t.size();
    if(n!=m) return false;
    unordered_map<char,int>mpp;
    for(auto x:s){
        mpp[x]++;
    }    
    for(int i=0;i<n;i++){
        if(mpp.find(t[i])!=mpp.end()){
            if(mpp[t[i]]<=0) return false;
            mpp[t[i]]--;
        }
        else return false;
    }
    return true;
    }
};