class Solution {
public:
    int kthFactor(int n, int k) {
        int c=0, i;
        for (i=1;i<=n;i++){
            if(n%i==0){
                c++;
            }
            if(c==k){
                break;
            }
        }
        return c<k?-1:i;
    }
};