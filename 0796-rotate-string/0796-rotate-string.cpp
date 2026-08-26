class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size()) return false;
    int n= s.size();
    string x=s+s;
    
    for(int i=0;i<n;i++){
        if(x[i]==goal[0]){
            int j=i;
            int k=0;
            while(j<x.size()&&k<n){
                if(x[j]!=goal[k]) {
                    break;}

                else {
                    j++;
                    k++;
                }
            }
            if(k==n) return true;
        }
    }  
    return false;  
    }
};