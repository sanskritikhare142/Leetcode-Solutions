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
            int x=(l1==NULL? 0: l1->val);
            int y=(l2==NULL? 0: l2->val);
            a=x+y+c;
            c=a/10;
            ListNode *node=new ListNode(a%10);
            if (l1!=NULL) l1=l1->next;
            if (l2!=NULL) l2=l2->next;
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