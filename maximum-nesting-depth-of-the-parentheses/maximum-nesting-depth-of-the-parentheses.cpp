class Solution {
public:
    int maxDepth(string s) {
        int m=0, c=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                c++;
                m=max(c,m);
            }
            if(s[i]==')'){
                c--;
            }
        }
        return m;
    }
};