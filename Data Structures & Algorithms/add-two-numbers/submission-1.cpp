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
        
        ListNode* h1 =l1;
        ListNode* h2  =l2;
        int carry=0;

        ListNode* temp =new ListNode(0);
        ListNode* dummy =temp ;
        while(h1 || h2 ||carry){
            int sum =carry;
            if(h1){
                sum +=h1->val;
                h1=h1->next;
            }
            if(h2){
                sum +=h2->val;
                h2=h2->next;
            }
            carry =sum/10;
            int actual =sum %10;
            dummy->next =new ListNode(actual);
            dummy=dummy->next;
        }
return temp->next;;

    }
};
