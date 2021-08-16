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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        auto temp=list1;
        int c=0;
        while(c+1!=a){
            c++;
            temp=temp->next;
        }
        auto temp1=temp;
        while(c!=b){
            c++;
            temp1=temp1->next;
        }
        temp->next=list2;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=temp1->next;
        return list1;
    }
};