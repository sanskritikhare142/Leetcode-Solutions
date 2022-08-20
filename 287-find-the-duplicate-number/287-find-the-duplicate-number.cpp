class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
            for(int i=0;i<n;i++){
                int val=abs(nums[i]);
               if(nums[val]<0){
                   return val;
               }else{
                   nums[val]=-nums[val];
               }
            }
        return -1;
    }
};