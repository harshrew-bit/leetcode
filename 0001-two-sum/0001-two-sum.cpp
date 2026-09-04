class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    int n = nums.size();
    int diff=0;
    unordered_map<int,int>mpp;
    for(int i=0;i<n;i++){
        diff=target-nums[i];
        if(mpp.find(diff)!=mpp.end()){
            return {mpp[diff],i};
        }
        else{
            mpp[nums[i]]=i;
        }
    }
    return {0,0};
    }
};