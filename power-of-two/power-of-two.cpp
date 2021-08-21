class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==0){
            return false;
        }
        if(n==1){
            return true;
        }
        if(n==536870912){
            return true;
        }
        if((log(n)/log(2))/floor(log(n)/log(2))==1){
            return true;
        }
        return false;
    }
};