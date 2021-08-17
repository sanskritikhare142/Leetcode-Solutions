class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int i, n = nums.size();
        vector<int> ans(n);
        for(i=0;i<n;i++){
            ans[i]=nums[nums[i]];
        }
        return ans;
    }
};