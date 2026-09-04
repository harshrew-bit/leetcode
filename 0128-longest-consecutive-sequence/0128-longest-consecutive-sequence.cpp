class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
    int n = nums.size();
    
    int maxi=0;
    unordered_set<int>st(nums.begin(),nums.end());
    for(int i:st){
        int cnt=1;
        if(st.find(i-1)==st.end()){
            int x=i;
            while(st.find(x+1)!=st.end()){
                cnt++;
                x++;
               
            }
        }
        maxi=max(maxi,cnt);
    }   
    return maxi;
    }
};