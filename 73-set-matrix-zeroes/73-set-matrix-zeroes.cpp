class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rows=matrix.size();
        int cols=matrix[0].size();
        bool colf=0;
        for(int i=0;i<rows;i++){
            if(matrix[i][0]==0){
                colf=1;
            }
            for(int j=1;j<cols;j++){
                if(matrix[i][j]==0){
                    matrix[i][0]=0;
                    matrix[0][j]=0;
                }
            }
        }

        for(int i=rows-1;i>=0;i--){
            for(int j=cols-1;j>0;j--){
                if(matrix[i][0]==0 || matrix[0][j]==0){
                    matrix[i][j]=0;
                }
            }
        }
                
        if(colf==1){
            for(int i=0;i<rows;i++){
                matrix[i][0]=0;
            }
        }
    }
};