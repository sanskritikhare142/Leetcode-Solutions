class Solution {
public:
    bool squareIsWhite(string c) {
        if(((int)c[0]%2==0 && c[1]%2 !=0) || ((int)c[0]%2!=0 && c[1]%2==0)){
            return true;
        }
        return false;
    }
};