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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *l3=new ListNode(), *temp3=l3;
        while(l1!=NULL && l2!=NULL){
            ListNode *temp4=new ListNode();
            if(l1->val<=l2->val){
                temp4->val=l1->val;
                l1=l1->next;
            }
            else{
                temp4->val=l2->val;
                l2=l2->next;
            }
            if(l3==NULL){
                l3=temp4;
            }else{
                temp3->next=temp4;
            }
            temp3=temp3->next;
        }
        while(l1!=NULL){
            ListNode *temp4=new ListNode();
            temp4->val=l1->val;
            temp3->next=temp4;
            temp3=temp3->next;
            l1=l1->next;
        }
        while(l2!=NULL){
            ListNode *temp4=new ListNode();
            temp4->val=l2->val;
            temp3->next=temp4;
            temp3=temp3->next;
            l2=l2->next;
        }
        return l3->next;
    }
};