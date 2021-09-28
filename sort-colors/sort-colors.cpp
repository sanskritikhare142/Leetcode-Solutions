class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int c1=0, c2=0;
        vector<int> ans(n,1);
        for(int i=0;i<n;i++){
            if(nums[i]==0){
              ans[c1]=nums[i];  
                c1++;
            }
            if(nums[i]==2){
              ans[n-c2-1]=nums[i];  
                c2++;
            }
        }
        for(int i=0;i<n;i++){
            nums[i]=ans[i];
        }
    }
};