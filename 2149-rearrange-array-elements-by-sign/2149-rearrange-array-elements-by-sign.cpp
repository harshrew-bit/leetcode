class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
    int n = nums.size();
    vector<int>ans(n);
    int x=0,j=1;
    for(int i=0;i<n;i++) {
        if(nums[i]>0){
            ans[x]=nums[i];
            x+=2;
        }
        else if(nums[i]<0){
            ans[j]=nums[i];
            j+=2;
        }
    }    
    return ans;
    }
};