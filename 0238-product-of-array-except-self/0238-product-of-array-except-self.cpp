class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ansl(n,1);
        int lp = 1;
        
        for (int i = 1; i < n; i++) {
            ansl[i] = ansl[i - 1] * nums[i - 1];
        }
        int rp = 1;
        for (int i = n - 1; i >= 0; i--) {
            int current = nums[i];

            nums[i] = ansl[i] * rp;

            rp = rp * current;
        }
        return nums;
    }
};