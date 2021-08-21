class Solution {
public:
    string addStrings(string num1, string num2) {
        reverse(num1.begin(), num1.end());
        reverse(num2.begin(), num2.end());
        int i=0, j=0,c=0;
        string res;
        while(i<num1.length() && j<num2.length()){
            res=res+to_string((num1[i]+num2[i]+c-2*'0')%10);
            c=(num1[i]+num2[i]+c-2*'0')/10;
            i++;
            j++;
        }
        while(i<num1.length()){
            res=res+to_string((num1[i]+c-'0')%10);
            c=(num1[i]+c-'0')/10;
            i++;
        }
        while(j<num2.length()){
            res=res+to_string((num2[j]+c-'0')%10);
            c=(num2[j]+c-'0')/10;
            j++;
        }
        if(c!=0){
            res=res+to_string(c);
        }
        reverse(res.begin(), res.end());
        return res;
    }
};