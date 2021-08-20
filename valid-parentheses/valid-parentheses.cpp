class Solution {
public:
    struct Stack{
        char val;
        struct Stack *next;
    }*top=NULL;
    void push(char c){
        struct Stack *newnode=new Stack();
        newnode->val=c;
        newnode->next=top;
        if(top!=NULL){
            newnode->next=top;
        }
        top=newnode;
    }
    bool pop(){
        struct Stack *temp;
        if(top==NULL){
            return false;
        }else{
            temp=top;
            top=top->next;
            delete temp;
            return true;
        }
    }
    bool isValid(string s) {
        for(int i=0;i<s.length();i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                push(s[i]);
            }
            else if(top==NULL || (s[i]==')' && top->val=='(') || (s[i]=='}' && top->val=='{') || (s[i]==']' && top->val=='[')){
                if(!pop()){
                    return false;
                }
            }
            else{
                return false;
            }
        }
        if(top==NULL){
        return true;
        }
        return false;
    }
};