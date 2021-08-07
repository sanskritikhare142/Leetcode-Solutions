class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
        int c=0;
int i=left;
            for(int j=0;j<ranges.size();j++){
                for(int k=ranges[j][0];k<=ranges[j][1];k++){
                    if(i>right){
                        break;
                    }
                     if(i==k){
                         c++;
                         i++;
                         j=-1;
                         break;
                     }   
                }
            }
        if(c<(right-left+1))return false;
        return true;
    }
};