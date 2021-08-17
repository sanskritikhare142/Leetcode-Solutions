class Solution {
public:
    int romanToInt(string s) {
        int i, x=0;
       for(i=0;i<s.length();i++){
           if(s[i]=='I'){
               if(s[i+1]=='X' || s[i+1]=='V'){
               continue;
               }
               x=x+1;
               continue;
           }
           if(s[i]=='V'){
               if(i>0 && s[i-1]=='I'){
                   x=x+4;
                    continue;
               }
               x=x+5;
               continue;
           }
           if(s[i]=='X'){
               if(i>0 && s[i-1]=='I'){
                   x=x+9;
                continue;
               }
               if(s[i+1]=='L' || s[i+1]=='C'){
                continue;
               }
               x=x+10;
               continue;
           }
           if(s[i]=='L'){
               if(i>0 && s[i-1]=='X' ){
                   x=x+40;
                continue;
               }
               x=x+50;
               continue;
           }
           if(s[i]=='C'){
               if(i>0 && s[i-1]=='X'){
                   x=x+90;
                continue;
               }
               if(s[i+1]=='D' || s[i+1]=='M'){
                continue;
               }
               x=x+100;
               continue;
           }
           if(s[i]=='D'){
               if(i>0 && s[i-1]=='C'){
                   x=x+400;
                continue;
               }
               x=x+500;
               continue;
           }
           if(s[i]=='M'){
               if(i>0 && s[i-1]=='C'){
                   x=x+900;
                continue;
               }
               x=x+1000;
               continue;
           }
       }
        return x;
    }
};