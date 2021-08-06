class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int, int>m;
        int c=0;
        for(int i:nums){
            if(!m.count(i)){
                m[i]=1;
            }
            else{
                int n=m.at(i);
                c+=n;
                m[i]=n+1;
            }
        }
        return c;
    }
};
