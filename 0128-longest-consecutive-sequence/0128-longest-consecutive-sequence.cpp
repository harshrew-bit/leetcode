class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
    int n = nums.size();
    unordered_set<int>st(nums.begin(),nums.end());
    int maxi=0;
    for(auto it : st){
        if(st.find(it-1)==st.end()){
            int curr=it;
            int cnt =1;
            while(st.find(curr+1)!=st.end()){
                
                curr++;
                cnt++;
                
            }
            maxi=max(maxi,cnt);
        }
    }    
    return maxi;
    }
};