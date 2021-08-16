class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& c) {
    double m;
 
    if(c[0][0]==c[1][0]){
        m=0;
    }else{
        m = (double)(c[0][1]-c[1][1])/(double)(c[0][0]-c[1][0]);
      }
        cout<<m;
        for(int i=1;i<c.size()-1;i++){
            
            if(m==0 && c[0][0]==c[1][0]){
                if(c[i][0]!=c[i+1][0]){
                    return false;
                }
                continue;
            }
            if((double)(c[i][1]-c[i+1][1])/(double)(c[i][0]-c[i+1][0])!=m){
                return false;
            }
        }
        return true;
    }
};