class Solution {
public:
    int binarySearch(vector<int>& a, int i, int t, int l, int h){
        while(l<=h){
            int m=(l+h)/2;
            if(a[m]==t){
                return m;
            }
            else if(t<a[m]){
                h=m-1;
            }
            else{
                l=m+1;
            }
        }
        return -1;
    }
    int search(vector<int>& a, int target) {
        int i, n=a.size();
        if(n==1){
            if(a[0]==target) return 0;
            return -1;
        }
        for(i=0;i<n-1;i++){
            if(a[i+1]<a[i]){
                break;
            }
        }
        int x= binarySearch(a, i, target, 0, i);
        int y= binarySearch(a, i, target, i+1, n-1);
        return x==-1?(y==-1?-1:y):x;
    }
};