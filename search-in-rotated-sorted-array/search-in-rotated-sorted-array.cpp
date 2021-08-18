class Solution {
public:
    int binarySearch(vector<int>& a, int i, int t, int l, int h, bool f){
        int m=(l+h)/2;
        if(l>h){
            return -1;
        }
        if(a[m]==t){
            return f?(m+i>=a.size()-1?(m+i)%(a.size()-1):m+i+1):m;
        }
        else if(t<a[m]){
            return binarySearch(a,i,t,l,m-1,f);
        }
        else{
            return binarySearch(a, i,t,m+1,h,f);
        }
    }
    int search(vector<int>& a, int target) {
        int i, n=a.size();
        bool f=0;
        if(n==1){
            if(a[0]==target) return 0;
            return -1;
        }
        for(i=0;i<n-1;i++){
            if(a[i+1]<a[i]){
                f=1;
                break;
            }
        }
        vector<int> b;
        for(int j=i+1;j<n;j++){
            b.push_back(a[j]);
        }
        for(int j=i;j>=0;j--){
            a[j+n-i-1]=a[j];
        }
        for(int j=0;j<n-i-1;j++){
            a[j]=b[j];
        }
        // for(int )
        return binarySearch(a, i, target, 0, n-1, f);
    }
};