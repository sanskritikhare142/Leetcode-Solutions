class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        unordered_map<int, int>m;
        int c=0;
        for(int i:time){
            c+=(i%60==0)?m[0]:m[60-i%60];
            m[i%60]++;
        }
        return c;
    }
};