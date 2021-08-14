class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n=nums.size();
        vector<int>a(nums);
        vector<int> ans;
        sort(a.begin(), a.end());
        unordered_map<int, int>m;
        int c=0, f=0;
        for(int i=0;i<n;i++){
            if(i<n-1 && a[i+1]==a[i]){
                f++;
                continue;
            }
            m[a[i]]=c++;
            c+=f;
            f=0;
        }
        for(int i=0; i<n;i++){
            ans.push_back(m.at(nums[i]));
        }
        return ans;
    }

};