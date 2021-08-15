class Solution {
public:
    void shift(char *a, char *b){
        *b=*a+*b-'0';
    }
    string replaceDigits(string s) {
        for(int i=1;i<s.length();i+=2){
            shift(&s[i-1], &s[i]);
        }
        return s;
    }
};