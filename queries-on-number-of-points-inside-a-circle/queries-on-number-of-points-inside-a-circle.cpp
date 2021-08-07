class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        unordered_map<string, bool>m;
        vector<int>ans(queries.size(),0);
        for(int i=0;i<queries.size();i++){
            for(int j=0;j<points.size();j++){
                if(pow(points[j][0]-queries[i][0],2)+pow(points[j][1]-queries[i][1],2)<=pow(queries[i][2],2)){
                    ans[i]++;
                }
            }
        }
        return ans;
    }
};