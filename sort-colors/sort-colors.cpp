class Solution {
public:
    void swap(int *a, int *b){
        int temp=*a;
        *a=*b;
        *b=temp;
    }
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int c1=0;
        vector<int> ans(n,1);
        for(int i=0;i<n;i++){
            if(nums[i]==0){
              swap(&nums[c1],&nums[i]);  
                c1++;
            }
            if(nums[i]==2){
                while(nums[n-1]==2 && i!=n-1){
                    n--;
                }
                swap(&nums[n-1],&nums[i]);
                if(nums[i]==0){
                    swap(&nums[c1],&nums[i]);
                    c1++;
                }
                n--;
            }
        }
    }
};