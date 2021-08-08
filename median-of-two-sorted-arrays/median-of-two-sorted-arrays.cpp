class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        int i=0,j=0;
        while(i<nums1.size()&&j<nums2.size()){
            if(nums1[i]<=nums2[j]){
                ans.push_back(nums1[i]);
                i++;
                continue;
            }
            ans.push_back(nums2[j]);
            j++;
        }
        while(i<nums1.size()){
            ans.push_back(nums1[i]);
            i++;
        }
        while(j<nums2.size()){
            ans.push_back(nums2[j]);
            j++;
        }
        if(ans.size()%2==0){
            return ((double)ans[ans.size()/2-1]+(double)ans[ans.size()/2])/2;
        }
        return ans[ans.size()/2];
    }
};