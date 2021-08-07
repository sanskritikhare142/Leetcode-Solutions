class Solution {
public:
    double trimMean(vector<int>& arr) {
        int n=0.05*arr.size();
        double s=0;
        sort(arr.begin(), arr.end());
        for(int i=n;i<arr.size()-n;i++){
            s=s+arr[i];
        }
        return s/(arr.size()-2*n);
    }
};