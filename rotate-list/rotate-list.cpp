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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL){
            return head;
        }
        int c=1;
        struct ListNode *temp=head;
        while(temp->next!=NULL){
            c++;
            temp=temp->next;
        }
        k=k%c;
        temp->next=head;
        struct ListNode *temp1=head, *prev;
        for(int i=0;i<c-k;i++){
            prev=temp1;
            temp1=temp1->next;
        }
        prev->next=NULL;
        head=temp1;
        return head;
    }
};