/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int a=l1->val+l2->val;
        ListNode *anshead=new ListNode(a%10);
        ListNode *temp=anshead;
        l1=l1->next;
        l2=l2->next;
        int c=a/10;
        while(l1!=NULL || l2!=NULL){
            ListNode *node=new ListNode();
            if(l1==NULL ){
                a=l2->val+c;
                    c=a/10;
                    a=a%10;
                node->val=a;
                l2=l2->next;
            }
            else if(l2==NULL){
                a=l1->val+c;
                    c=a/10;
                    a=a%10;
                node->val=a;
                l1=l1->next;
            }
            else{
                a=l1->val+l2->val+c;
                    c=a/10;
                    a=a%10;
                node->val=a;
                l1=l1->next;
                l2=l2->next;
            }
            if(anshead->next==NULL){
                anshead->next=node;
            }
            temp->next=node;
            temp=temp->next;
        }
        if(c!=0){
            temp->next=new ListNode(c);
            
        }
        return anshead;
    }
};