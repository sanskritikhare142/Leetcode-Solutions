class Solution {
public:
    bool binarySearch(vector<vector<int>>& a, int t, int i, int l, int h){
        if(l>h){
            return false;
        }
        else{
            int m=(l+h)/2;
             if(t<a[i][m]){
                return binarySearch(a, t, i, l, m-1);
            }
            else if(t>a[i][m]){
                return binarySearch(a, t, i, m+1, h);
            }
            else{
                return true;
            }
        }
    }
    
    bool searchMatrix(vector<vector<int>>& m, int t) {
        int i=0;
        if(m.size()>1){
            for(i=0;i<m.size()-1;i++){
                if(t<m[i+1][0]){
                    break;
                }
            }
        }
        cout<<i<<m[0].size()-1;
        return binarySearch(m, t, i, 0, m[0].size()-1);
    }
};