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
       
         ListNode* dummynode = new ListNode(0);
         dummynode->next=head;
          
        ListNode* temp =dummynode;

         while(n>=0){
          temp=temp->next;
          n--;
         }

         ListNode* h=dummynode;
         while(temp!=NULL){
           temp=temp->next;
           h=h->next;
         }
         h->next =h->next->next;
      return dummynode->next;
    }
};
