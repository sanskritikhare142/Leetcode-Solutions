class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size(), i=0, k=0, l=n-1;
        while(i<=l){
           if(nums[i]==0){
                swap(nums[i++],nums[k++]);
            }
            else if(nums[i]==1){
                i++;
            }
            else{
                swap(nums[i], nums[l--]);
            }
        }
    }
};