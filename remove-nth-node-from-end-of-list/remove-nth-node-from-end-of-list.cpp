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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int c=1;
        struct ListNode *temp=head;
        while(temp->next!=NULL){
            c++;
            temp=temp->next;
        }
        temp=head;
        if(n==c){
            head=head->next;
            delete temp;
            return head;
        }
        struct ListNode *prev;
        for(int i=0;i<c-n;i++){
            prev=temp;
            temp=temp->next;
        }
        prev->next=temp->next;
        delete temp;
        return head;
    }
};