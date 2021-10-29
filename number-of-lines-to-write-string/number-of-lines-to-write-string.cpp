class Solution {
public:
    vector<int> numberOfLines(vector<int>& w, string s) {
        int sum=0, n=0;
        for(int i=0;i<s.length();i++){
            sum+=w[s[i]-'a'];
            if(sum>100){
                n++;
                sum=w[s[i]-'a'];
            }
        }
        return {n+1,sum};
    }
};