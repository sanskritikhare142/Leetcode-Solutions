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
    ListNode* swapPairs(ListNode* head) {
        ListNode *ptr=head;
        ListNode *prev=NULL;
        while(ptr!=NULL && ptr->next!=NULL){
            ListNode *after=ptr->next;
            if(ptr==head){
                head=after;
            }else{
                prev->next=after;
            }
            ptr->next=after->next;
            after->next=ptr;
            prev=ptr;
            ptr=ptr->next;
        }
        return head;
    }
};