class Solution {
public:
    int binarySearch(vector<int>& arr, int l, int r, int x)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;
        if (arr[mid] == x)
            return mid;
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);
        return binarySearch(arr, mid + 1, r, x);
    }
    return -1;
}
    vector<int> twoSum(vector<int>& nums, int target) {
        int i,j, x=0;
        vector<int>a(nums);
        sort(a.begin(), a.end());
        for(i=0;i<a.size();i++){
           if(binarySearch(a,i+1,a.size()-1, target-a[i])!=-1){
               break;
            }
        }
        x=0;
        while(true){
         if(nums[x]==a[i]){
            break;
         }
         if(x>nums.size()){
                x=-1;
                break;
            }
        x++;
        }
        j=0;
        while(true){
         if((nums[j]==target-a[i]) && j!=x){
            break;
         }
            if(j>nums.size()){
                j=-1;
                break;
            }
        j++;
        }
        return {min(x,j), max(x, j)};
    }
};