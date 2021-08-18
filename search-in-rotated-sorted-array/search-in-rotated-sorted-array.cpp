class Solution {
public:
    int binarySearch(vector<int>& a, int i, int t, int l, int h){
        int m=(l+h)/2;
        if(l>h){
            return -1;
        }
        if(a[m]==t){
            return m;
        }
        else if(t<a[m]){
            return binarySearch(a,i,t,l,m-1);
        }
        else{
            return binarySearch(a, i,t,m+1,h);
        }
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