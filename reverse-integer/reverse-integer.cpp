class Solution {
public:
    int reverse(int x) {
        int n=0;
        while(x!=0){
        if(n<INT_MIN/10 || n>INT_MAX/10 || (n==INT_MAX/10 && (x%10)>7) | (n==INT_MIN/10 && (x%10)<-8)){
                return 0;
            }
            n=10*n+(x%10);
            x=x/10;
        }
        return n;
    }
};