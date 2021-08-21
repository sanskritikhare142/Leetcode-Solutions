class Solution {
public:
    string complexNumberMultiply(string num1, string num2) {
        int r1=0, r2=0, i1=0, i2=0, i, j;
        bool n=0;
        for(i=0;num1[i]!='+';i++){
            if(num1[i]=='-'){
                n=1;
                continue;
            }
            r1=10*r1+num1[i]-'0';
            cout<<r1<<endl;
        }
        if(n==1){
            r1=r1-2*r1;
        }
        n=0;
        for(i=i+1;num1[i]!='i';i++){
            if(num1[i]=='-'){
                n=1;
                continue;
            }
            i1=10*i1+(int)num1[i]-'0';
        }
        if(n==1){
            i1=i1-2*i1;
        }
        n=0;
        for(j=0;num2[j]!='+';j++){
            if(num2[j]=='-'){
                n=1;
                continue;
            }
            r2=10*r2+(int)num2[j]-'0';
        }
        if(n==1){
            r2=r2-2*r2;
        }
        n=0;
        for(j=j+1;num2[j]!='i';j++){
            if(num2[j]=='-'){
                n=1;
                continue;
            }
            i2=10*i2+num2[j]-'0';
        }
        if(n==1){
            i2=i2-2*i2;
        }
       return to_string((r1*r2)-(i1*i2))+"+"+to_string((r1*i2)+(r2*i1))+"i"; 
    }
};