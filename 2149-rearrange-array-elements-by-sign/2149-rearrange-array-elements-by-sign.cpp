class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
    int ne = nums.size();
    vector<int>ans(ne);
    int p=0,n=1;
    for(int i=0;i<ne;i++){
        if(nums[i]>0){
            ans[p]=nums[i];
            p+=2;
        }
        else if(nums[i]<0){
            ans[n]=nums[i];
            n+=2;
        }
    } 
    return ans;
    }
};